#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char id[n][20];//�ַ����ͣ���Ϊ��X�Ĵ��� 
	int i,j;
	int sum[n];
	int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int Z[11] = {0,1,2,3,4,5,6,7,8,9,10};
//	int W[11] = {1,0,'X',9,8,7,6,5,4,3,2};
//	����������������Ϊ���֤���һλ����ΪX����������͵Ļ�����Ҫת���������׳��� 
	char W[11] = {49,48,88,57,56,55,54,53,52,51,50};//��������intת��Ϊ��ASCII�������ַ��� 
	for(i=0;i<n;i++){
		sum[i] = 0;
		scanf("%s",id[i]);
		for(j=0;j<17;j++){
			sum[i] += weight[j] * (id[i][j]-'0');			
		}
		getchar();
	}
	int flag = 0;
	for(i=0;i<n;i++){
		for(j=0;j<11;j++){
			if((sum[i]%11==Z[j])&&(id[i][17]!=W[j])){
//				printf("%d %c %c ",Z[j],W[j],id[i][17]);
				printf("%s\n",id[i]);
				flag ++;	
			}
		}
	}
	if(flag==0){
		printf("All passed");
	}
	return 0;
}
