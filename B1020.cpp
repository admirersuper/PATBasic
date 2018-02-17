#include <cstdio>
#include <algorithm>

using namespace std;

struct node{
	double amount,total;
	double price;
}pie[1010];

bool cmp(node a,node b){
	return a.price>b.price;
}

int main(){
	int n;
	double d;					//����Ϊdouble�ͣ���Ȼһ�����Խڵ㲻��ȥ 
	scanf("%d%lf",&n,&d);
	int i;
	for(i=0;i<n;i++){
		scanf("%lf",&pie[i].amount);
	}
	for(i=0;i<n;i++){
		scanf("%lf",&pie[i].total);
		pie[i].price = pie[i].total/pie[i].amount;
	}
	sort(pie,pie+n,cmp);
	double sum = 0.0;
	for(i=0;i<n;i++){
		if(pie[i].amount<=d){		//����С�ڵ���d 
			d = d-pie[i].amount;
			sum += pie[i].total;
		}else{						//��������d 
			sum += pie[i].price*d;
			break;					//����ѭ�� 
		}
	}
	printf("%.2f",sum);
	return 0;
}
