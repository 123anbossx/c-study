#include<iostream>
using namespace std;
// 对象模型和 this 指针
// 只有非静态成员变量才属于类的对象上
// 成员函数和成员变量是分开存储的
// this 指针指向被调用的成员函数所属的对象
// this 指针的用途
   // 1，当形参和成员变量同名时，可用 this 指针区分
   // 2，在类的非静态成员函数中返回对象本身，可食用  return *this
class Person {
    public:
      int m_age;
    Person(int age){
        this->m_age = age;
    };
    // 这里必须返回引用,如果返回值，则输入不同的对象，（或者返回指针）
    Person& addAge(Person &p){
         this->m_age+=p.m_age;
         return *this;
    };
};
int main(){
   Person a(10);
   Person b(10);
   b.addAge(a).addAge(a).addAge(a); // 链试调用
   cout << "b的年龄"<< b.m_age << endl;
   return 0;
}