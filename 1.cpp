#include<iostream> // 引入 输入/输出流库
#include <string>
using namespace std; // 引入命名空间
#define day 8 // 定义一个 宏常量
const int Day = 7;
// 宏常量 不参与类型检测， 宏是全局的，直到遇到 #undef 指令，容易造成变量冲突
// const 修饰符参与类型检测 更安全，可以局部定义，
// endl 换行符
int main(){
    const int size = 15;
    char name1 [size];
    char name2[size]= "C++owboy";
    name2[3]= '\0';
    cout << name2<< endl;
    cout << strlen(name2) << endl;
    cout << name2[4]<< endl;
    return 0;
}
