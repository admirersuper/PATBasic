#include <stdio.h>

int main(){
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	int devide;
	devide = (c2-c1)/100;

	printf("%02d:",devide/3600);
	printf("%02d:",devide%3600/60);	
	if((c2-c1)%100>=50){//�������� 
		printf("%02d",devide%3600%60+1);//��λ��0���� 
	}else{
		printf("%02d",devide%3600%60);
	}
	
	return 0;
}
