//set�汾 
#include <cstdio>
#include <set>
#include <cstring>

using namespace std;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int total[m];
	int wrong[m];
	memset(total,0,sizeof(total));		//��Ҫ��ʼ��Ϊȫ0 
	memset(wrong,0,sizeof(wrong));		//��Ҫ��ʼ��Ϊȫ0 
	set<char> st[m];
	//options
	for(int i=0;i<m;i++){
		int temp,k;
		scanf("%d%d%d",&total[i],&temp,&k);
		for(int j=0;j<k;j++){
			char c;
			scanf(" %c",&c);
			st[i].insert(c);
		}
	}
	//answers
	for(int i=0;i<n;i++){
		int grade = 0;
//		scanf("\n");			//����Ҫ 
		getchar();				//ȡ�߻س��� 
		for(int j=0;j<m;j++){
			if(j!=0){
//				scanf(" ");		//ÿ��ѡ��֮���пո���Ҫ�����ո� 
				getchar();		//ÿ��ѡ��֮���пո���Ҫ�����ո�
			}
			int t;
			scanf("(%d",&t);
			set<char> ans;
			for(int p=0;p<t;p++){
				char c;
				scanf(" %c",&c);
				ans.insert(c);
			}
			scanf(")");
			if(ans == st[j]){		//right
				grade += total[j];
			}else{					//wrong
				wrong[j]++;
			}
		}
		printf("%d\n",grade);
	}
	int maxWrong = 0;
	for(int i=0;i<m;i++){
		if(wrong[i]>maxWrong){
			maxWrong = wrong[i];
		}
	}
	if(maxWrong==0){
		printf("Too simple");
	}else{
		printf("%d",maxWrong);
		for(int i=0;i<m;i++){
			if(wrong[i]==maxWrong){
				printf(" %d",i+1);
			}
		}
	}
	return 0;
}

////vector�汾 
//#include <cstdio>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int total[m];
//	int wrong[m];
//	memset(total,0,sizeof(total));		//��Ҫ��ʼ��Ϊȫ0 
//	memset(wrong,0,sizeof(wrong));		//��Ҫ��ʼ��Ϊȫ0 
//	vector<char> st[m];
//	//options
//	for(int i=0;i<m;i++){
//		int temp,k;
//		scanf("%d%d%d",&total[i],&temp,&k);
//		for(int j=0;j<k;j++){
//			char c;
//			scanf(" %c",&c);
//			st[i].push_back(c);
//		}
//	}
//	//answers
//	for(int i=0;i<n;i++){
//		int grade = 0;
////		scanf("\n");			//����Ҫ 
//		getchar();				//ȡ�߻س��� 
//		for(int j=0;j<m;j++){
//			if(j!=0){
////				scanf(" ");		//ÿ��ѡ��֮���пո���Ҫ�����ո� 
//				getchar();		//ÿ��ѡ��֮���пո���Ҫ�����ո�
//			}
//			int t;
//			scanf("(%d",&t);
//			vector<char> ans;
//			for(int p=0;p<t;p++){
//				char c;
//				scanf(" %c",&c);
//				ans.push_back(c);
//			}
//			scanf(")");
//			if(ans == st[j]){		//right
//				grade += total[j];
//			}else{					//wrong
//				wrong[j]++;
//			}
//		}
//		printf("%d\n",grade);
//	}
//	int maxWrong = 0;
//	for(int i=0;i<m;i++){
//		if(wrong[i]>maxWrong){
//			maxWrong = wrong[i];
//		}
//	}
//	if(maxWrong==0){
//		printf("Too simple");
//	}else{
//		printf("%d",maxWrong);
//		for(int i=0;i<m;i++){
//			if(wrong[i]==maxWrong){
//				printf(" %d",i+1);
//			}
//		}
//	}
//	return 0;
//}
