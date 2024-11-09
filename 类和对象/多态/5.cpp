#include <iostream>
using namespace std;
class Animal{
    public:
     virtual void speak() {
        cout << "动物在说话"<< endl;
     };
     Animal(){
        cout << "动物的构造函数"<< endl;
     };
    virtual ~Animal(){
        cout << "动物的析构函数"<< endl;
     };
};
class Cat:public Animal {
    public:
      string * name;
      Cat(string name){
          this->name = new string(name);  
      };
      void speak(){
         cout << *this->name << "小猫在说话"<< endl;
      };
      // 父类指针在析构的时候不会调用子类中的析构函数，导致子类如果有堆区数据，出现内存泄漏
      ~Cat(){
        cout <<"小猫的析构函数"<< endl;
      }
};
int main(){
    Animal * animal = new Cat("布偶");
    animal->speak();
    // 如果不是放基类指针数据，则不执行基类中的析构函数，也不会执行 派生类中的析构函数，没法释放在派生类中开辟的堆区内存
    delete animal;
    return 0;
}