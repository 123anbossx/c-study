#include <iostream>
using namespace std;
int * func(){
    // 在堆上创造数据 利用new 操作符  由程序员自己释放
    int *p = new int(10);
    return p;
};
int main(){
    int *a = func();
    cout << *a << endl;
    return 0;
}