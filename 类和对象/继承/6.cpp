#include <iostream>
using namespace std;
class BaseAll {
    public:
    int m_a;
    BaseAll(){
        this->m_a = 0;
    }
};
class Base1:virtual public BaseAll{
    public:
    int m_b;
    Base1(){
        this->m_b = 1;
    }
};
class Base2:virtual public BaseAll {
    public:
    int m_c;
    Base2(){
        this->m_c = 3;
    }
};
class Base3:public Base1,public Base2{
    public:
    int m_d;
    Base3(){
        this->m_d = 4;
    }
};
// 菱形继承 同样的数据会继承两份，利用虚继承来解决这个问题
int main(){
    Base3 base3;
    base3.m_a = 20;


    cout << "菱形继承 " << base3.m_a << endl;
    return 0;
}