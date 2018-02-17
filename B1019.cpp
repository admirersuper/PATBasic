#include <cstdio>
#include <algorithm>

using namespace std;

int circle(int a){		//circle����������Max-Min��ֵ 
	int res[4] = {0};	//�ǵó�ʼ��Ϊȫ0����Ȼ����ֶδ��� 
	int i=0;
	while(a!=0){		//��a��ÿһλ���������� 
		res[i++] = a%10;
		a /= 10;
	}
	sort(res,res+4);	//a��ÿһλ���մ�С�������� 
	int max = res[3]*1000+res[2]*100+res[1]*10+res[0];	//ת�������ֵ 
	int min = res[0]*1000+res[1]*100+res[2]*10+res[3];	//ת������Сֵ 
	int next = max - min ;	//�����Сֵ֮�� 
	printf("%04d - %04d = %04d\n",max,min,next);
	return next;	//���������� 
}

int main(){
	int a;
	scanf("%d",&a);
	int flag = 1;
	while(flag){
		a = circle(a);	//�ݹ����circle(a) 
		if(a == 0||a == 6174){	//��aΪ0��6174ʱ�����˳�ѭ�� 
			flag = 0;
		}
	}
	return 0;
}
