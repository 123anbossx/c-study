#include <iostream>
using namespace std;
// 多态
// 动态多态满足条件
    // 1,有继承关系
    // 2，子类重写父类中的虚函数
// 动态多态使用
    // 1，父类的指针或者引用，执行子类对象 
class Animal{
    public:
    // 加上 virtual 关键字，实现虚函数，地址晚绑定 开始地址不能确定，根据传入的参数确定
    virtual void speak(){
        cout << "动物在说话"<< endl;
     }
};
class Cat:public Animal{
    public:
      void speak(){
        cout << "小猫在说话"<< endl;
      }
};
// 以下这种方式，地址早绑定 （会输出 动物在说话）
void doSpeak(Animal &p){
    p.speak();
};
int main(){
     Cat cat;
     doSpeak(cat);
    return 0;
}