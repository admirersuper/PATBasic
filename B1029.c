#include <stdio.h>
#include <string.h>

int main(){
	char a[90];
	char b[90];
	scanf("%s",a);
	getchar();
	scanf("%s",b);
	int alen = strlen(a);
	int blen = strlen(b);
	int i,j;
	int flag;
	int index = 0;			//δ���ֵĸ��� 
	char out[alen-blen];	//����δ���ֵ��ַ� 
	for(j=0;j<alen;j++){	//Ѱ��a�е�ÿһ�����Ƿ���b�г��� 
		flag = 0;
		for(i=0;i<blen;i++){
			if(a[j]==b[i]){
				flag = 1;	//������ 
				break;
			}
		}
		if(flag==0){		//δ���� 
			if(a[j]>='a' &&a[j]<='z'){
				a[j] = a[j] - 32;	//Сдת��д 
			}
			out[index] = a[j];
			index++;
		}
	}
	for(i=0;i<index;i++){	
		for(j=0;j<i;j++){
			if(out[i]==out[j]){	//ȥ����ͬ���ַ� 
				out[i] = '#';
			}
		}
	}
	for(i=0;i<index;i++){
		if(out[i]!='#'){
			printf("%c",out[i]);
		}
	}
	return 0;
}
