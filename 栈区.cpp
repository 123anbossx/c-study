#include <iostream>
using namespace std;
int * text(int b){
   // b 也存放在栈区
    int a = 10 ;
    return &a;
}
int main(){
    int *p = text(10); // 报错，布局变量不能返回 存放在栈中, 函数运行完，会被销毁
    cout << "返回的局部变量的指针:"<< *p<< endl;
    return 0;
}