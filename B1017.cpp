#include<iostream>
#include<string>

using namespace std;

int main(){
    string str,ans;		//ans����string������ 
    int n,d = 0;		//�����ͳ�������int���� 
    cin >> str >> n;	//�����������string���� 
    for(int i = 0; i <= str.size()-1; i++){
		int current = d * 10 + (str[i]-'0');	//ÿһ������ʱ����������ǰ��һλ��������*10 
		ans += (current / n+'0');	//stringƴ��ÿһ���̣���=����������/n 
		d = current % n;	//ÿһ������ 
    }
    for(int i = (ans[0] == '0' && ans.size()!=1)?1:0; i < ans.size(); i++){	//��֤��һλ��0����� 
    	cout << ans[i];	
	}
    cout << " " << d;
    return 0;
}

