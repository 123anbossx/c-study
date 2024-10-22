#include <iostream>
using namespace std;
// 静态成员变量
class Person {
    // 1 所有对象共享同一份数据
    // 2，编译阶段分配内存
    //3，类内声明，类外初始化操作
    // 4，也是有访问权限
    // 静态成员函数 1，所有对象共享同一个函数 2，静态成员函数只能访问静态成员变量

    public:
      static int m_A;
      static void func(){
         cout << "访问静态成员函数"<< m_A << endl;
      };
};
int Person::m_A = 100;
void test(){
    // 静态成员不属于某个对象上，所有对象共享一份数据，因此，静态成员变量有两种访问方式，
    // 1，通过对象访问
    // 2，通过类名进行访问
    Person a;
    a.func();
    a.m_A = 200;
    Person::func();
    cout << "静态成员的值"<<a.m_A<< endl;  //通过对象访问
    cout << "通过类名进行访问"<< Person::m_A << endl;
}
int main(){
    test();
    return 0;
}