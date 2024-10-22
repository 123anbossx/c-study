#include <iostream>
using namespace std;
// 在一个对象中调用另外一个对象
class Hander {
    public:
      string work;
      Hander(string work){
        this->work = work;
        cout << "hander的构造函数"<< endl;
      };
      ~Hander(){
         cout << "hander的析构函数"<< endl;
      };
};
class Person{
    public:
    int age;
    Hander a;
    // 必须通过初始化列表 初始化对象 a，要不然报错
     Person(int age,string work):a(work){
        this->age = age;
        cout << "Person 的构造函数："<< endl;
     };
     ~Person(){
        cout << "Person的析构函数" << endl;
     };
};
 void test(){
    Person people(30,"程序员");
    cout << "年龄是："<< people.age << endl;
    cout << "工作是："<< people.a.work<< endl;
 };
int main(){
    test();
    return 0;
}