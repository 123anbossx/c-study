// 类模版对象做函数参数
#include <iostream>
using namespace std;
template <class T1,class T2>
class Person {
    public:
      T1 m_name;
      T2 m_age;
      Person(T1 name,T2 age){
            this->m_name = name;
            this->m_age = age;
      }
      void showInfo(){
         cout << "name "<< this->m_name << endl;
         cout << "age "<< this->m_age << endl;
      }
};
// 指定传入类型
void PrintOne(Person <string,int>&a){
    a.showInfo();
}
// 参数模版化
template<class T1,class T2>
void printTwo(Person <T1,T2>&b){
    b.showInfo();
}
//整个类模版化
template<class T>
void printThree(T &c){
    c.showInfo();
}
int main(){
    Person <string,int>a("李四",30);
    Person <string,int>b("张三",20);
    Person <string,int>c("张三1",10);
    PrintOne(a);
    printTwo(b);
    printThree(c);
    return 0;
}