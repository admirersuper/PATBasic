#include <stdio.h>

int main(){
	char str[100][80];
	int i=0;
	
//	do{
//		scanf("%s",str[i]);
//		i++;
//	}while((getchar())!='\n');
//	//�ø÷����ýṹ�ж�һ���ڵ�����Ƿ���� 
	
	//��������
	while(scanf("%s",str[i])!=EOF){
		i++;
	}
	
	//������� 
	for(i = i-1;i>0;i--){
		printf("%s ",str[i]);
	}
	printf("%s",str[0]);
	
	return 0;
}

