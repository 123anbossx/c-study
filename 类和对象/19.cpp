#include <iostream>
using namespace std;
// 关系运算符重载
class Person {
    public :
      int age;
      bool operator==(Person &p){
         if(this->age == p.age){
            return true;
         }else{
            return false;
         }
      };
};
int main(){
    Person a;
    a.age = 20;
    Person b;
    b.age = 20;
    if(a==b){
        cout << "a和 b 的年龄相同" << endl;
    }else{
        cout << "a和 b 的年龄不相同"<< endl;
    };
    return 0;
}