#include <stdio.h>
#include <string.h>

int main(){
	char str[4][70];
	gets(str[0]);
	gets(str[1]);
	gets(str[2]);
	gets(str[3]);
	char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i;
	for(i=0;i<strlen(str[0])&&i<strlen(str[1]);i++){
		//��һ��������A-G 
		if(str[0][i]==str[1][i]&&(str[0][i]>='A'&&str[0][i]<='G')){
			printf("%s ",week[str[0][i]-65]);
			break;
		}
	}
	//i��i+1��ʼ 
	for(i=i+1;i<strlen(str[0])&&i<strlen(str[1]);i++){
		if(str[0][i]==str[1][i]){
			//�ڶ���������0-9����A-N 
			if(str[0][i]>='A'&&str[0][i]<='N'){
				printf("%02d:",str[0][i]-'A'+10);
				break;//break����ŵ�����ҵ�������ѭ������Ȼ���д��� 
			}else if(str[0][i]>='0'&&str[0][i]<='9'){
				printf("%02d:",str[0][i]-'0');
				break;//break����ŵ�����ҵ�������ѭ������Ȼ���д��� 
			}	
		}
	}
	for(i=0;i<strlen(str[2])&&i<strlen(str[3]);i++){
		if(str[2][i]==str[3][i]){
			//������������Сд���ߴ�д��ĸ 
			if((str[2][i]>='A'&&str[2][i]<='Z')||(str[2][i]>='a'&&str[2][i]<='z')){ 
				printf("%02d",i);
				break;	
			}	
		}
	}	
	return 0;
}
