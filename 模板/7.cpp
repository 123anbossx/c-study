// 类模板和函数模板的区别
// 类模板没有自动类型推导的使用方式
// 类模板在模板参数列表中可以有默认参数
#include <iostream>
using namespace std;
// 类模板在模板参数列表中可以有默认参数,然后在参数列表中可以省略这个参数
template <class typeName, class typeAge=int>
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
    // 类模板没有自动类型推导的使用方式
     // 以下是错的 必须加参数列表
    // Person a("李四",20);
    // 以下是对的
     Person <string ,int> a("李四",20);
    return 0;
}