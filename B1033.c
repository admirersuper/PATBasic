#include <stdio.h>
#include <string.h>
//��һ���п���Ϊ�գ�scanf�����޷���⵽���ֿ��У������gets����
 
int main(){
	char unable[100];
//	scanf("%s",unable);
	gets(unable);
	char should[100001];
//	scanf("%s",should);
	gets(should);
	int ulen = strlen(unable);
	int slen = strlen(should);
//	printf("%d %d\n",ulen,slen);
	if(ulen==0){				//��һ��û������ʱ������ֱ������ڶ��м��� 
		printf("%s",should);
		return 0;
	}
	int i,j;
	for(i=0;i<slen;i++){
		for(j=0;j<ulen;j++){
			if(should[i]==unable[j]){	//.���˵ļ�ֱ�ӳ�����Ӧ�ó����ַ����У����޷����
				should[i] = '#';
			}
			if((unable[j]=='+')&&(should[i]>='A'&&should[i]<='Z')){	//'+'�����ڻ��˵ļ��У������д��ĸ�޷������ע�����޷������������ֻ�����Сд 
				should[i] = '#';
			}
			if((unable[j]>='A'&&unable[j]<='Z')&&(should[i]-32==unable[j])){ //���˵ļ��еĴ�д��ĸ�Ǵ���Ӣ�ļ��������Щ��ĸ��Ӧ�Ĵ�д��Сд���޷����
				should[i] = '#';
			}
		}
	}
	int flag = 0;
	for(i=0;i<slen;i++){
		if(should[i]!='#'){
			printf("%c",should[i]);
			flag++;
		}
	}
	if(flag==0){
		printf("\n");
	} 
	return 0;
} 
