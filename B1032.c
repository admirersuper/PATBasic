#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int info[n][2];
	int i;
	int sum[100001] = {0};
	int max=0;
	int maxflag;
	for(i=0;i<n;i++){
		scanf("%d %d",&info[i][0],&info[i][1]);
		getchar();
		sum[info[i][0]]+=info[i][1];//����:ֱ�Ӷ�Ӧ��ѧУ���ܷ֣�������ȥ��˭���ĸ�ѧУ���˶��ٷ֡� 
		if(sum[info[i][0]]>=max){
			max = sum[info[i][0]];
			maxflag = info[i][0];
		}
	}
	printf("%d %d",maxflag,max);
	return 0;
}
