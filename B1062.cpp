#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}
//1.�߽�����
//2.������С����
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if(n1*m2>n2*m1){				
		swap(n1,n2);
		swap(m1,m2);
	}
	int d1;
//	d1 = (int)ceil(n1*k*1.0/m1);
	d1 = n1*k/m1+1;					//��ʼ�ı߽磬���ڲ��ܰ�����������������Ҫ����ʹ��ceil��floor 
//	d2 = (int)floor(n2*k*1.0/m2);
	int cnt = 0;
	for(int i=d1;i*m2<n2*k;i++){	//���������ȡ����Ϊ�����ı߽�Ļ�Ҳ���д���i*m2<n2*k��Ϊ�����ı߽� 
		if(gcd(i,k)==1){ 
			if(cnt!=0) printf(" ");
			printf("%d/%d",i,k);
			cnt++;
		}
	}
	return 0;
}
