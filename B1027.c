#include <stdio.h>
#include <math.h>

int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	//���� 
	int row = sqrt((n+1)/2);
	int i,j,p;
	int count=0;
	//������ 
	for(i=row;i>1;i--){
		for(p=0;p<count;p++){
			printf(" "); 
		}
		for(j=0;j<2*i-1;j++){
			printf("%c",c);
		}
		count++;
		printf("\n");
	}
	//������ 
	for(i=1;i<=row;i++){
		for(p=0;p<count;p++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("%c",c);
		}
		count--;
		printf("\n");
	}
	
	printf("%d",n-(2*row*row-1));
	return 0;
} 
