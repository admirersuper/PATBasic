#include <stdio.h>
#include <string.h>

int main(){
	char str[10010];
	gets(str);
	if(str[0]=='-'){
		printf("-");
	}
	int pos,i,len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='E'){
			pos = i;//���E��λ�� 
			break;
		}
	}
	int exp=0;//ָ��
	for(i=pos+2;i<len;i++){
		exp = exp*10+(str[i]-'0');//����ָ��������ֵ 
	}
	if(exp==0){
		//ָ��Ϊ0��ֱ�����E֮ǰ�ַ��ľ���
		for(i=0;i<pos;i++){
			printf("%c",str[i]);
		} 
	}
	if(str[pos+1]=='-'){
		//ָ��Ϊ�����������ʽ��0.XXXXXX
		printf("0.");
		for(i=0;i<exp-1;i++){
			printf("0");//���С������exp-1��0 
		}
		for(i=1;i<pos;i++){
			if(str[i]!='.'){
				printf("%c",str[i]);//�������С����������ַ� 
			}
		}
	}else{
		//ָ��Ϊ��
		for(i=1;i<pos;i++){
			if(str[i]!='.'){
				printf("%c",str[i]);//�������С����������ַ� 
			}
			if(i==exp+2 && pos-3!=exp){	//С�����ƶ�λ�ò������������С���� 
				//С�������expλ(ԭ��Ϊ��2λ��������Ϊexp+2λ)������պ��ƶ������һλ(pos-3==exp)Ҳ�������. 
				printf("."); 
			}
		}
		//���ָ��������������0
		for(i=0;i<exp-(pos-3);i++){
			printf("0");
		}
	}
	return 0;
}
