#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main(){
	char t[30],a[30],b[30];
	gets(t);
	gets(a);
	gets(b);
	int ai = strlen(a)-1,bi = strlen(b)-1,ti = strlen(t)-1;	//ĩβλ�ã���ĩβ��ʼ����
	int carry = 0;		//��λ 
	vector<int> vi;
	while(ai>=0||bi>=0){
		int temp = t[ti]-'0';
		if(temp==0){
			temp = 10;
		}
		if(ai>=0&&bi>=0){
			vi.push_back(((a[ai]-'0')+(b[bi]-'0')+carry)%temp);
			carry = ((a[ai]-'0')+(b[bi]-'0')+carry)/temp;
			ai--;
			bi--;
			ti--;
		}else if(ai>=0){
			vi.push_back(((a[ai]-'0')+carry)%temp);
			carry = ((a[ai]-'0')+carry)/temp;
			ai--;
			ti--;
		}else if(bi>=0){
			vi.push_back(((b[bi]-'0')+carry)%temp);
			carry = ((b[bi]-'0')+carry)/temp;
			bi--;
			ti--;
		}else{
			break;
		}
	}
	if(carry!=0){				//��λ��Ϊ0������Ҫ���� 
		int temp = t[ti]-'0';
		if(temp==0){
			temp = 10;
		}
		vi.push_back(carry%temp);
	}
	while(vi.size()!=0&&vi[vi.size()-1]==0){	//����ǰ������0 
		vi.pop_back();
	}
	if(vi.size()==0){
		printf("0");
	}else{
		for(int i=vi.size()-1;i>=0;i--){	//������� 
			printf("%d",vi[i]);
		}
	}
	return 0;
}
