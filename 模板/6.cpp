// 类模板
#include<iostream>
using namespace std;
template <class typeName, class typeAge>
class Person {
    public:
      typeName m_name;
      typeAge m_age;
      Person(typeName name,typeAge age){
         this->m_name = name;
         this->m_age = age;
      }
};
int main(){
    Person<string,int> a("李四",20);
    cout << "姓名："<< a.m_name<< endl;
    cout << "年龄："<< a.m_age << endl;
    return 0;
}