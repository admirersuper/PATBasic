#include <stdio.h>
#include <string.h>

//���´�����һ�ּ򵥵�˼·���ο���ַhttps://www.liuchuo.net/archives/573
int main()
{
	char a[100001];
	scanf("%s",a);
	int sum = 0,cp = 0,ct = 0;
	int len = strlen(a);
	int i;
	for(i=0;i<len;i++){
		if(a[i]=='T'){
			ct++;
		}
	}
	for(i=0;i<len;i++){
		if(a[i]=='P'){
			cp++;
		}
		if(a[i]=='T'){
			ct--;
		}
		if(a[i]=='A'){
			sum = (sum + cp*ct) % 1000000007;
		}
	}
	printf("%d",sum%1000000007);
    return 0;
}

