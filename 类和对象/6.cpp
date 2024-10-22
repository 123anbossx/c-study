#include <iostream>
using namespace std;
class Person {
    public:
     int age;
     Person(){
        cout << "默认构造函数" << endl;
     };
     Person(int age){
        this->age = age;
        cout << "传参构造函数 age"<< age << endl;
     };
     ~Person(){
        cout << "析构构造函数"<< endl;
     };
     Person(const int &age){
        this->age = age;
        cout << "拷贝构造函数"<< endl;
     }
};
// 值传递的方式给函数参数传值
  void test01(Person b){
     b.age = 40;
    cout << "test01的拷贝"<< b.age<< endl;
  };
  // 值方式返回局部对象
  Person test02(){
      Person c;
      c.age = 50;
      return c;
  }
  void test(){
      Person a;
      a.age = 20;
      test01(a);
      Person c1 = test02();
      cout << "test函数的值"<< a.age << endl;
      cout << "test02函数的值"<< c1.age << endl;
  };
int main(){
    // 拷贝构造函数的三个调用时机
    // 1，使用一个已经创建的对象初始化一个新对象;
    // 2，值传递的方式给函数参数传值
    // 3，值方式返回局部对象
    test();
    return 0;
}