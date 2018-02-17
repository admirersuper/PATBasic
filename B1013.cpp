#include <cstdio>
#include <cmath>

int isPrime(int x){		//�ж�һ����x�ǲ������� 
	int flag = 1;
	if(x<=1){
		flag = 0;
	}
	for(int i=2;i<=sqrt(x*1.0);i++){
		if(x%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int cnt=0;
	for(int i=2;i<=100000000;i++){			//������10000���������Ҫ���ѭ��100000000�� 
		if(isPrime(i)){
			cnt++;
			if(cnt>=m&&cnt<=n){
				printf("%d",i);
				if((cnt-m+1)%10!=0&&cnt!=n){	//Լ���ո� 
					printf(" ");
				}
				if((cnt-m+1)%10==0){			//Լ������ 
					printf("\n");
				}
			}
			if(cnt>n){				//����������break����˲���Ӱ�츴�Ӷ� 
				break;
			}
		}
	}
	return 0;
}
