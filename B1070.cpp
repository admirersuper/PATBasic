#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	vector<int> v;
	for(int i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	double len = v[0]*1.0;		//��ʼ��Ϊ��һ�����ӵĳ��� 
	for(i=1;i<n;i++){			//�ӵڶ������ӿ�ʼ�ݹ� 
		len = (len+v[i])/2;		//�ݹ���� 
	}
	printf("%d",(int)floor(len));
	return 0;
}
