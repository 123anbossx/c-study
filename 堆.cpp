#include <iostream>
using namespace std;
int * func(){
    // 在堆上创造数据 利用new 操作符  由程序员自己释放
    int *p = new int(10);
    return p;
};
void creaeArr(){
   int *arr = new int[10]
   for(int i=0;i<10;i++){
      arr[i] = i+100
   }
   delete[] arr // 释放一个人数组 需要加一个中括号
}
int main(){
    int *a = func();
    cout << *a << endl;
    cout << *a << endl;
    cout << *a << endl;
    delete a; // 用delete 释放堆中的内存
    cout << *a << endl;
    return 0;
}