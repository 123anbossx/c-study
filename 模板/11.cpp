// 类模板和友元
#include <iostream>
using namespace std;
template <class Tname,class Tage>
class Person {
   friend void showInfo(Person<string,int> &p){
        std::cout << "name: "<< p.m_name << endl;
        std::cout << "age: "<< p.m_age << endl;
    };
    public:
       Person(Tname name,Tage age){
           this->m_name = name;
           this->m_age = age;
       };
    private:
      Tname m_name;
      Tage m_age;
};
int main(){
    Person<string,int> a("李四",20);
    showInfo(a);
    return 0; 
}