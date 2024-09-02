#include<iostream> // 引入 输入/输出流库
using namespace std; // 引入命名空间
#define day 8 // 定义一个 宏常量
const int Day = 7;
// 宏常量 不参与类型检测， 宏是全局的，直到遇到 #undef 指令，容易造成变量冲突
// const 修饰符参与类型检测 更安全，可以局部定义，
// endl 换行符
int main(){
    char a = 'n';
    cout<<a<<endl; // 输出
    cout  <<endl<< "这是一个测试程序"<<endl<< "这是一个宏常量"<<day<<endl<<"这是一个用const修饰的常量"<<Day<<endl<< "Press Enter to continue..."; // 输出
    cin.get(); // 输出
}
