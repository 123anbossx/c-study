#include <iostream>
using namespace std;
int main(){
  int a = 10;
  int b = 12;
  int c = 13;
  int d = a>b?a:b;
  cout << "d的值是："<< d << endl;  // 在c++中 三目运算符返回的是一个变量 是可以继续赋值的
   a>b?a:b = 300;
   cout << "a的值是"<< a << endl;
   cout << "b的值是:"<< b << endl;
   return 0;
}