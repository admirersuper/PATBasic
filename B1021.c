//�����ַ�������� 
#include <stdio.h>
#include <string.h>

int main(){
	char a[1010];
	int len;
	scanf("%s",a);			//�������� 
	int b[10] = {0};
	len = strlen(a);		//�õ�����ĳ��� 
	int i;
	for(i=0;i<len;i++){
		//���������±걣������
		b[a[i]-'0']++; 
	}
	for(i=0;i<10;i++){
		if(b[i]!=0){
			printf("%d:%d\n",i,b[i]);
		}
	}
	return 0;
}
