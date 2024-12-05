// 函数模板和普通函数区别
 // 1，普通函数调用可以发生隐式类型转换
 // 2， 函数模板用自动类型推导，不可以发生隐式类型推到
 // 3，函数模板，用显示执行类型，可以发生隐式类型推导
 #include <iostream>
 using namespace std;
 int test01(int a,int b){
    return a+b;
 };
 
 template <typename T>
 T test02(T a,T b){
     return a+b;
 }
 int main(){
    int a = 10;
    int b = 20;
    char c = 'a';
    cout <<  test01(a,c) << endl;
    // 以下会报错
    // cout <<  test02(a,c) << endl;
    // 以下不会报错
    cout << test02<int>(a,c) << endl;
    return 0;
 }