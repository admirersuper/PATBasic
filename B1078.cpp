#include <iostream>
#include <string>
using namespace std;

int main(){
	char c;
	string s;
	cin>>c;
	getchar();				//ȡ�߻��з� 
	getline(cin,s);
	if(c=='C'){
		int cnt=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){				//�ظ����ֵ��ַ� 
				cnt++;							//����++ 
			}else{
				if(cnt!=1){					//�������1�������cnt���ַ� 
					cout<<cnt<<s[i];
					cnt=1;					//���³�ʼ�� 
				}else{
					cout<<s[i];
				}
			}
		}
	}else{
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){		//���ַ���תΪ���֣���¼���� 
				cnt = cnt*10 + (s[i]-'0');
			}else{
				if(cnt!=0){					//���������Ϊ0��˵�����ظ��ַ� 
					for(int j=0;j<cnt;j++){	//���cnt���ַ� 
						cout<<s[i];
					}
					cnt = 0;
				}else{
					cout<<s[i];				//�������ԭ�ַ� 
				}
			}
		}
	}
	return 0;
}
