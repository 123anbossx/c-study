// 函数模板和普通函数调用规则
// 如果函数模板和不同函数都可以调用，优先调用普通函数
// 可以通过空模板参数列表来强制调用函数
// 函数模板也可以发生重载
// 如果函数模板可以产生更好的匹配，优先调用函数模
#include <iostream>
using namespace std;
void test01(int a){
    cout << "这是普通函数调用 "<< a<< endl;
}
template <typename T>
void test01(T a){
   cout << "这是函数模板的调用 "<< a << endl;
}
template <typename T>
void test01(T a,T b){
    cout << "调用函数重载模板 "<< a << " "<< b<< endl;
}
int main(){
    int a = 10;
    int b = 20;
    // 以下调用普通函数
    test01(a);
    // 以下通过空模板参数列表强制调用函数模板
     test01<>(a);
    // 如果函数模板可以产生更好的匹配，优先调用函数模
    test01(a,b);
    return 0;
}