#include <iostream>
using namespace std;
// 继承中，子类和父类的调用关系
class Base{
    public:
    int a;
    Base(){
        cout << "这是基类的构造函数"<< endl;
    };
    ~Base(){
        cout << "这是基类的析构函数"<< endl;
    };
};
class Child :public Base{
    public:
    Child(){
        cout << "这是子类的构造函数"<< endl;
    };
    ~Child(){
        cout << "这是子类的析构函数"<< endl;
    };
};
int main(){
    Child b;
    return 0;
}