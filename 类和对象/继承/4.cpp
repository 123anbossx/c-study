#include <iostream>
using namespace std;
// 继承同名成员处理方式
  // 1，访问子类同名，直接访问即可
  // 2，访问父类同名成员，需要加作用
 class Base {
    public:
    int m_a;
    static int m_b;
    Base(){
        this->m_a = 100;
    }
 };
  int Base::m_b = 100;
 class Child:public Base{
    public:
    static int m_b;
     int m_a;
     Child(){
        this->m_a = 200;
     }
 };
 int Child::m_b = 200;
int main(){
    Child a;
    cout << "子类中的属性访问"<< a.m_a << endl;
    // 通过对象访问
     cout << "子类中的静态属性"<< a.m_b << endl;
    cout << "父类中的属性访问"<< a.Base::m_a<< endl;
    cout << "父类中的静态属性"<< a.Base::m_b << endl;
    // 通过类名访问
    cout << "Child通过类名访问 "<< Child::m_b << endl;
    cout << "Base通过类名访问"<< Base::m_b << endl;
    cout << "子类和类名"<< Child::Base::m_b<< endl;
    return 0;
}