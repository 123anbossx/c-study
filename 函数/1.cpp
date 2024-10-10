#include <iostream>
using namespace std;
// 函数重载 （函数名相同，提高函数的复用性）
//1，同一个作用域下
// 函数参数类型不同，个数不同，顺序不同
// 函数重载的注意事项
  // 引用作为函数重载的条件
void fun(int &a){
   cout << 1<< endl;
};
void fun(const int &a){
      cout << a << endl;
};
// 函数重载遇到默认参数
void fun2(int a,int b =10){
    cout << a << b << endl;
};
void fun2(int a){
    cout << a << endl;
};
int main(){
    int a = 10;
   fun(a);// 走第一个
   fun(10); // 走第二个
    fun2(10,20);
   return 0;
}