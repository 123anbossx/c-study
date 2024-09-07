#include <iostream>
using namespace std;

int main(){
    int num = 10;
    cout << "请输入int型的值num："<<endl;
    cin >> num;
    cout<<num<<endl;
    char b = 'a';
    cout << "请输入字符型a："<< endl;
    cin>> b;
    cout<<b<<endl;

    string str = "hello";
    cout<<"请输入字符串str:"<< endl;
    cin>>str;
    cout<<str<<endl;

    bool c = true;  // 一个非0的值都是true 返回1
    cout<<"请输入bool型 c:"<<endl;
    cin>> c;
    cout<<c<<endl;
}