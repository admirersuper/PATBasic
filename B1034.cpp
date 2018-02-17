#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

struct Fraction{
	ll up,down;
}a,b;
 
ll gcd(ll a,ll b){
	return b==0?a:gcd(b,a%b);
}

Fraction reduction(Fraction f){		//�ص㣬�е㲻��Ϥ 
	if(f.down<0){			//���� 
		f.up = -f.up;
		f.down = -f.down;
	}
	if(f.up==0){
		f.down = 1;
	}else{
		int d = gcd(abs(f.up),f.down);	//��Ҫȡ�����Լ������ͬ�� 
		f.up /= d;
		f.down /= d;
	}
	return f;
}

void show(Fraction f){
	f = reduction(f);	//�Ȼ��� 
	if(f.up<0){			//���� 
		printf("(");
	}
	if(f.down == 1){	//���� 
		printf("%lld",f.up);
	}else if(abs(f.up)>f.down){		//�ٷ��� 
		printf("%lld %lld/%lld",f.up/f.down,abs(f.up)%f.down,f.down);
	}else{				//����� 
		printf("%lld/%lld",f.up,f.down);
	}
	if(f.up<0){			//���� 
		printf(")");
	}
}

Fraction add(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down+f1.down*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction minu(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down-f1.down*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction multi(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction devide(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down;
	res.down = f1.down*f2.up;
	return reduction(res);	
}

int main(){
	scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
	//add
	show(a);
	printf(" + ");
	show(b);
	printf(" = ");
	show(add(a,b));
	printf("\n");
	//minus
	show(a);
	printf(" - ");
	show(b);
	printf(" = ");
	show(minu(a,b));
	printf("\n");
	//multi
	show(a);
	printf(" * ");
	show(b);
	printf(" = ");
	show(multi(a,b));
	printf("\n");
	//devide
	show(a);
	printf(" / ");
	show(b);
	printf(" = ");
	if(b.up==0){
		printf("Inf");
	}else{
		show(devide(a,b));
	}
	return 0;
}

////���ߣ�FlyRush
////���ӣ�https://www.jianshu.com/p/9f2e6f3c112c
////��Դ������
////����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
//#include <stdio.h>
//
////շת����������Լ�� 
//int gcd(long long a, long long b){
//	//��bΪ0ʱ��aΪ���Լ��
//	//����a = b, b= a%b;
//    return b == 0 ? a : gcd(b, a % b); 
//}
//
////���ո�����������ʽ�ķ��� 
//void print(long long a, long long b){
//    long long c = 0; //������ǰ����������֣�Ĭ����0
//    if(a > 0){ //����
//        if(b == 1){ //����3/1
//            printf("%lld", a);
//        }
//        else if(a > b){ //����5/3
//            c = a / b;
//            a -= b * c;
//            printf("%lld %lld/%lld", c, a, b);
//        }
//        else{ //����� ����3/5
//            printf("%lld/%lld", a, b);
//        }
//    }
//    else if(a == 0){ //����0/3
//        printf("%c", '0');
//    }
//    else{ //����
//        if(b == 1){ //����-3/1
//            printf("(%lld)", a);
//        }
//        else if(-1 * a > b){ //����-5/3
//            c = a / b;
//            a = (-1 * a) % b;
//            printf("(%lld %lld/%lld)", c, a, b);
//        }
//        else{ //�����
//            printf("(%lld/%lld)", a, b);
//        }
//    }
//}
//
////�ӷ� 
//void add(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" + ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * b2 + a2 * b1; 
//    long long b3 = b1 * b2;
//    //�ӷ������ӷ�ĸ������˳�Ϊ�µķ��ӣ���ĸ����γ��µķ�ĸ 
//    //���������ʽ���Ǵ�������ʽ
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void subtract(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" - ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * b2 - a2 * b1;
//    long long b3 = b1 * b2;
//    //���������ӷ�ĸ���������Ϊ�µķ��ӣ���ĸ����γ��µķ�ĸ 
//    //���������ʽ���Ǵ�������ʽ
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void multiply(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" * ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * a2;
//    long long b3 = b1 * b2;
//    //�˷���������˳�Ϊ�µķ��ӣ���ĸ����γ��µķ�ĸ 
//    //���������ʽ���Ǵ�������ʽ
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void divide(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" / ");
//    print(a2, b2);
//    printf(" = ");
//    if(a2 == 0){
//        printf("Inf");
//    }
//    else if(a2 < 0){
//        long long a3 = -1 * a1 * b2;
//        long long b3 = -1 * b1 * a2;
//        //������(a1/b1)/(a2/b2) = (a1/b1)*(b2/a2) = (a1*b2)/(a2*b1);
//        //���������ʽ���Ǵ�������ʽ
//        long long gcd3 = abs(gcd(a3, b3));
//        a3 /= gcd3;
//        b3 /= gcd3;
//        print(a3, b3);
//    }
//    else{
//        long long a3 = a1 * b2;
//        long long b3 = b1 * a2;
//        //���������ʽ���Ǵ�������ʽ
//        long long gcd3 = abs(gcd(a3, b3));
//        a3 /= gcd3;
//        b3 /= gcd3;
//        print(a3, b3);
//    }
//    printf("\n");
//}
//
//int main(){
//    long long a1, b1, a2, b2;
//    long long c1 = 0, c2 = 0;
//    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
//    //�Ȼ��������ʽ���Ǵ�������ʽ
//    long long gcd1 = abs(gcd(a1, b1));//���Լ��1 
//    a1 /= gcd1;
//    b1 /= gcd1;
//    long long gcd2 = abs(gcd(a2, b2));//���Լ��2 
//    a2 /= gcd2;
//    b2 /= gcd2;
//    //ͳһ�������ʽ��������
//    add(a1, b1, a2, b2);
//    subtract(a1, b1, a2, b2);
//    multiply(a1, b1, a2, b2);
//    divide(a1, b1, a2, b2);
//    return 0;
//}


