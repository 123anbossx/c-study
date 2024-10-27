#include <iostream>
using namespace std;
// +号 运算符重载
class Person {
    public:
    int m_num;
    // 通过内部函数重载
    // Person operator+ (Person &p){
    //     Person temp;
    //     temp.m_num = this->m_num + p.m_num;
    //     return temp;
    // };
    // 用成员函数实现
//    Person PersonAddPerson(Person &p){
//         Person temp;
//         temp.m_num = this->m_num + p.m_num;
//         return temp;
//     }
};
// 全局函数重载
Person operator+(Person &p1,Person &p2){
   Person temp;
   temp.m_num = p1.m_num + p2.m_num;
   return temp;
};
// 元算符和int重载
Person operator+(Person &p, int num){
    Person temp;
   temp.m_num = p.m_num + num;
   return temp;
};
int main(){
    Person a;
    Person b;
    a.m_num = 10;
    b.m_num = 20;
    // Person c = a+b;
    // Person c = a.PersonAddPerson(b);
    // 成员函数重载本质
    // Person c = a.operator+(b);
    // 全局函数本质
      Person c = operator+(a,b);
      Person d = c+100;
    cout << "c的m_num值:"<< c.m_num << endl;
    cout << "d的m_num值:"<< d.m_num << endl;
    return 0;
}