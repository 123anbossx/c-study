#include <iostream>
using namespace std;
// 多继承语法
class Base1 {
    public:
     int m_a;
     int m_d;
     Base1(){
        this->m_a = 100;
        this->m_d = 300;
     }
};
class Base2{
    public:
     int m_b;
     int m_d;
     Base2(){
        this->m_b = 200;
        this->m_d = 500;
     }
};
class Child:public Base1,public Base2{
    public:
     int m_c;
};
int main(){
    Child child;
    cout << "child继承过来的属性："<< child.m_a <<" "<< child.m_b << endl;
    cout << "访问Base1的m_d "<< child.Base1::m_d << endl;
      cout << "访问Base2的m_d "<< child.Base2::m_d << endl;
    return 0;
}