#include <cstdio>
#include <algorithm>

using namespace std;

////����˼�� 
//int main(){
//	int n,p;
//	scanf("%d%d",&n,&p);
//	int a[n];
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,a+n);	//������˳������
//	int ans = 1;	//����������ֵΪ1 
//	for(i=0;i<n;i++){
//		int j = upper_bound(a+i+1,a+n,(long long)a[i]*p) -a;	//��j��λ��
//		ans = max(ans,j-i);	//��ans��j�����ֵ��algorithm���е�max()����
//	}
//	printf("%d",ans);
//	return 0;
//}

//two pointers ˼��
int main(){
	int n,p;
	scanf("%d%d",&n,&p);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int i=0,j=0,count=1;
	while(j<n&&i<n){	//i��j��û����ĩ��ʱ�ͼ���ѭ�� 
		//�� a[j]<=(long long)a[i]*pʱ����count��������j���� 
		if(a[j]<=(long long)a[i]*p){
			count = max(count,j-i+1);	//���¼����� 
			j++;
		}else{	//���Ǹ�����������ʱ��i���� 
			i++;
		}
	}
	printf("%d",count);
	return 0;
} 
