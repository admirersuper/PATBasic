//��	����	��	���� 
//s		d		q	t
//579	8		72	3
//72	8		9	0
//9		8		1	1
//1		8		0	1
//(579)10 -> (1103)8 

//20��  ��do-while���ܹ�ȥ 
#include <stdio.h>

int main(){
	int a,b;
	int d;
	scanf("%d %d %d",&a,&b,&d);
	int s = a+b;
	int t[31] = {0};
	int i = 0;
	do{
		t[i] = s%d;
		s = s/d;
		i++;
	}while(s!=0);
//	while(s!=0){		//whileһ���ڵ㲻��ȥ 18�� 
//		t[i] = s%d;
//		s = s/d;
//		i++;
//	}
	int j=i;
	for(j=i-1;j>=0;j--){
		printf("%d",t[j]);
	}
	return 0;
}
