#include <iostream>
using namespace std;
void yinyong(int &a,int &c){
    int temp = a;
    a = c;
    c = temp;
};
int main(){
    // 引用必须有初始值；2，在初始化后不能改变
    // 引用的基本语法
    int a = 10;
    int &b = a;
    int c = 90;
    b = 30;
    // 引用传递
    yinyong(a,c);
    cout << "a的值："<< a<< endl;
    cout << "b的值："<< b << endl;
   
    return 0;
}