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
   int a= 10;
   int b = 20;
    // 引用传递
    yinyong(&a,&b);
    // cout << "a的值："<< a<< endl;
    // cout << "b的值："<< b << endl;
   
    return 0;
}