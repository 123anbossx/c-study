#include <iostream>
using namespace std;
//用多态和普通写法实现一个计算器的功能
class Calculator {
    public:
     int m_a;
     int m_b;
     int getResult(string oper){
        if(oper == "+"){
            return this->m_a + this->m_b;
        }else if(oper == "-"){
            return this->m_a - this->m_b;
        }else if(oper == "*"){
            return this->m_a * this->m_b;
        }else{
            return this->m_a/this->m_b;
        }
    };
};
void test01(){
    Calculator c;
    c.m_a = 10;
    c.m_b = 10;
    cout << "m_a+m_b= "<< c.getResult("+")<< endl;
    cout << "m_a-m_b= "<< c.getResult("-")<< endl;
    cout << "m_a*m_b= "<< c.getResult("*")<< endl;
    cout << "m_a/m_b= "<< c.getResult("/")<< endl;
}
int main(){
    test01();
    return 0;
}