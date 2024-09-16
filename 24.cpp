#include <iostream>
using namespace std;
// 让指针p 记录变量 a 的地址
int main(){
    int a = 20;
    int *p = &a; // 在32位操作系统下，占用4个字节的内存 64位操作系统下占用8个字节
    *p = 1000;
    cout << "a的值是 "<< a << endl;
    cout << "指针p的值是" << *p << endl;
    return 0;
}