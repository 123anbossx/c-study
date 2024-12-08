//类模板与继承
 // 1 当字类继承的父类是一个类模版时，子类在声明的时候，要指定出父类中 T 的类型
 // 2 如果不指定，编译器无法给于子类分配内存
 // 3 如果像灵活的指出父类中的 T 的类型，字类也需要变为类模板

#include <iostream>
using namespace std;
template <class Tname,class Tage>
class Person {
    public:
     Tname m_name;
     Tage m_age;
};
// 这是第一种，明确指出基类中的数据类型
// class Son:public Person<string,int>{
//   public:
//    Son(string name,int age){
//         this->m_name = name;
//         this->m_age = age;
//    };
//    void showInfo(){
//         std::cout << "name: "<< this->m_name << endl;
//    };
// };
template <class Tname,class Tage>
class Son2:public Person<Tname,Tage>{
  public:
   Son2(Tname name,Tage age){
        this->m_name = name;
        this->m_age = age;
   };
   void showInfo(){
        std::cout << "name: "<< this->m_name << endl;
   };
};
int main(){
    Son2 <string,int> s("李四",20);
    s.showInfo();
    return 0;
}