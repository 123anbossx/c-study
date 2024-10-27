#include <iostream>
using namespace std;
// 左运算符重载
class Person {
    public:
    int m_a;
    int m_b;
};
// 只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout,Person &p){
    cout << "m_a的值是： " << p.m_a << "m_b的值是： "<< p.m_b;
    return cout;
};
int main(){
    Person a;
    a.m_a = 10;
    a.m_b = 20;
    cout << a << endl;
}