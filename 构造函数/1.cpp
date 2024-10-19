#include <iostream>
using namespace std;
// 对象的初始化和清理
// 构造函数：1，没有返回值，不用写void
           // 2, 函数名和类名相同
           // 3，构造函数可以有参数，可以发生重载
           // 4，创建对象的时候，构造函数会自动调用，而且只调用一次

class Person {
    private:
     string name;
    public:
      Person(){
        cout << "Person的构造函数"<<endl;
      };
  // 析构函数，进行清理操作
  // 没有返回值，不写void;
  // 函数名与类名相同，在名称前面加～
  // 析构函数不可以有参数，不可以发生重载
  // 对象在销毁前，回自动调用析构函数，而且只调用一次
    ~Person(){
        cout << "析构函数执行"<< endl;
    };
};
void test(){
    Person a;
};
int main(){
    test();
    return 0;
}