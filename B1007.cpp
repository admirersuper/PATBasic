#include <cstdio>
#include <cmath>

int isPrime(int x){
	int flag = 1;
	if(x<=1) {
		flag = 0;
	}
	for(int i=2;i<=sqrt(x*1.0);i++){
		if(x%i==0){
			flag = 0;
		}
	}
	return flag;
}

int main(){
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for(int i=2;i+2<=n;i++){	//ע��ѭ����ֹ��������i+2<=n�����뱣֤i��i+2����n�ķ�Χ�� 
		if(isPrime(i)&&isPrime(i+2)){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
