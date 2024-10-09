#include <iostream>
using namespace std;
// 引用做函数的返回值
// 不要返回局部变量的引用
// int& test(){
//     int a = 10; // 局部变量 存放在栈区 程序结束时释放
//     return a;
// };
int& test01(){
    static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放 ，生命周期比栈区长
    return a; 
}
int main(){
    // int &ref = test();
    // cout << "局部变量a的值" << ref << endl;

    int& ref1 = test01();
    cout << "静态变量a的值"<< ref1 << endl;
      cout << "静态变量a的值"<< ref1 << endl;
         test01() = 1000; // 如果函数的返回值是一个引用，这个函数的调用可以作为一个左值
        cout << "静态变量a的值"<< ref1 << endl;
          cout << "静态变量a的值"<< ref1 << endl;
    return 0;
}