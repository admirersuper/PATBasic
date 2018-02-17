#include <stdio.h>
#include <algorithm>

using namespace std;
 
bool cmp(int a,int b){
	return a>b;
}

int main(){
	int k;
	scanf("%d",&k);
	int a[k];
	int hashTable[100] = {0};
	int i;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		int n = a[i];
		while(n!=1){
			if(n%2==0){
				n = n/2;
			}else{
				n = (3*n+1)/2;
			}
			//n�ǿ��ܳ��ֵ����֣������������100�ڵģ�������еĹؼ�������100�ڵ� 
			if(n<=100){
				hashTable[n] = 1;
			}
		}
	}
	int flag = 0;		//�ؼ����ĸ��� 
	for(i=0;i<k;i++){
		if(hashTable[a[i]]==0){
			flag++;
		}
	}
	sort(a,a+k,cmp);	//���� 
	
	if(flag ==0 ){		//����û�йؼ�����ʱ�� 
		printf("\n");
		return 0;
	}
	for(i=0;i<k;i++){
		if(hashTable[a[i]]==0){
			printf("%d",a[i]);		//����ؼ��� 
			flag--;
			if(flag>0){
				printf(" ");
			}
		}
	}
	
	return 0;
}
