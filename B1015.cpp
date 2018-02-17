#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Stu{
	int id;
	int g1,g2;
	int c;
}s[100010];

vector<Stu> v;

bool cmp(Stu a,Stu b){
	if(a.c!=b.c){						//���ͬ��������� 
		return a.c<b.c;
	}else{
		if((a.g1+a.g2)!=(b.g1+b.g2)){	//�����ͬ���ֲܷ�ͬ�����ֽܷ��� 
			return (a.g1+a.g2)>(b.g1+b.g2);
		}else{
			if(a.g1!=b.g1){				//�ܷ������ͬ���·ֲ�ͬ�����·ֽ��� 
				return a.g1>b.g1;
			}else{						//�ܷ������ͬ���·���ͬ����ѧ������ 
				return a.id<b.id;
			}
		}
	}
}

int main(){
	int n,l,h;
	scanf("%d%d%d",&n,&l,&h);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&s[i].id,&s[i].g1,&s[i].g2);
		if(s[i].g1>=l&&s[i].g2>=l){
			if(s[i].g1>=h&&s[i].g2>=h){
				s[i].c = 1;
			}else if(s[i].g1>=h&&s[i].g2<h){
				s[i].c = 2;
			}else if(s[i].g1<h&&s[i].g2<h&&s[i].g1>=s[i].g2){
				s[i].c = 3;
			}else{
				s[i].c = 4;
			}
			v.push_back(s[i]);
		}
	}
	printf("%d\n",v.size());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		printf("%d %d %d\n",v[i].id,v[i].g1,v[i].g2);
	}
	return 0;
}
