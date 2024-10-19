#include <iostream>
using namespace std;
// 无参构造（默认构造），有参构造
//按照类型分类  1， 普通构造 2，拷贝构造
class Person{ 
    public:
    int age;
     Person(){
        cout << "无参构造函数"<< endl;
     };
    Person(int a){
        this->age = a;
        cout << "有参构造函数"<< endl;
     };
    Person(const Person &p){
        this->age = p.age;
        cout << "拷贝构造函数"<< endl;
     };
     ~Person(){
        cout << "析构函数"<< endl;
     }
};
void test(){
    // 调用
    // 默认调用方法
    Person a;
    Person b(20);
    Person c(b);
    cout << "b的年龄是" << b.age << endl;
    cout << "c的年龄是"<< c.age << endl;
    //2 显示法;
    // 注意事项
     // 1，调用默认构造函数时不要加 （），负责就被认为是一个函数的声明

};
int main(){
    test();
}