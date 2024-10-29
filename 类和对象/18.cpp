#include <iostream>
using namespace std;
// 赋值运算符重载
class Person {
    public:
     int * age;
     Person(int age){
        // cout << "构造函数："<< age << endl;
        this->age = new int(age);
     };
     Person& operator=(Person &p){
         this->free();
         this->age = new int(*p.age);
         // 解引用必须加上
         return *this;
     };
     ~Person(){
        this->free();
     };
     void free(){
        if(this->age != NULL){
            delete this->age;
            this->age = NULL;
        };
     }
};
ostream & operator<<(ostream &cout , Person &p){
    cout << *p.age;
    return cout;
};
int main(){
     Person a(10); 
     Person b(20);
     Person c(30);
    c = b = a;
     cout << "a的年龄是："<< a<< endl;
     cout << "b的年龄是："<< b << endl;
     cout <<"c的年龄是："<< c << endl;
    return 0;
}