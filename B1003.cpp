#include <cstdio>
#include <cstring>

int judge(char a[]){
	int flag = 0;
	int len = strlen(a);
	int l=0,m=0,r=0;
	int p=0,t=0,i;
	for(i=0;i<len;i++){
		if(a[i]=='P'){	//����P���ֵ�λ�� 
			p = i;
		}
		if(a[i]=='T'){	//����T���ֵ�λ�� 
			t = i;
		}
		if((a[i]!='A')&&(a[i]!='P')&&(a[i]!='T')){	//���������ַ���˵���𰸴��� 
			flag = 0;								//����0 
			return flag;
		}
	}
	for(i=0;i<p;i++){
		if(a[i]=='A'){		//P���A�ĸ��� 
			l++;
		}
	}
	for(i=p;i<t;i++){
		if(a[i]=='A'){		//PT�м�A�ĸ��� 
			m++;
		}
	}
	for(i=t;i<len;i++){		
		if(a[i]=='A'){		//T�ұ�A�ĸ��� 
			r++;
		}
	}
	if(l*m==r&&m!=0){		//���l*m==r����m!=0�Ļ���˵���Ǵ���ȷ�� 
		flag = 1;			//����1 
	}
	return flag;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char a[110];
		scanf("%s",a);
		int flag = judge(a);
		if(flag){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
