//�Ӵ�С�����10 9 8 8 7 7 6 6 3 2,ģ�������� 
//��i��������a[i]	��i��	��Ҫ��i�쳬��iӢ��	�ж�����	�Ƿ�����	E 
//				10		1			1			10>1		YES			1 
//				9		2			2			9>2			YES			2
//				8		3			3			8>3			YES			3
//				8		4			4			8>4			YES			4
//				7		5			5			7>5			YES			5
//				7		6			6			7>6			YES			6
//				6		7			7			6<=7		NO			6
//				6		8			8			6<=8		NO			6
//				3		9			9			3<=9		NO			6
//				2		10			10			2<=10		NO			6
//��˿��Է��֣�ÿһ���жϵ���������a[i]>i������������������E�����򲻸���	 
#include <cstdio>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){			//��С���� 
	return a>b;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100010];
	int i;
	for(i=1;i<n+1;i++){			//Ϊ�˲���ô�ֿڣ�i��1��ʼ��� 
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1,cmp);		//��a[1]��a[n+1]�Ӵ�С���� 
	int res = 0;				//������ 
	for(i=1;i<n+1;i++){			//�Ӵ�Ŀ�ʼ�� 
		if(a[i]>i){				//�����i���ﳵ�Ĺ���������i����˵���������� 
			res = max(res,i);	//����res��ȡ��ֵ 
		}
	}
	printf("%d",res);			//������ 
	return 0;
}
