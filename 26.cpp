#include <iostream>
using namespace std;
int main(){
    // 常量指针 1，指针的指向可以修改，但是指针指向的值不可以改
    int a = 10;
    int b =10;
    int *p = &a; // 正常指针
    const int *p1 = &b; //常量指针 
    cout << "指针p的值" << *p << endl;
    cout << "常量指针p1的值"<< *p1<< endl;
    // 指针常量 // 指针的指向不可以改，但是值可以改
    int * const p2 = &a;
    // const 即修饰指针又修饰常量 都不可以修改
    const int * const p3 =&a;
    return 0;
}