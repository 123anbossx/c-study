#include <iostream>
using namespace std;
class Base {
    public :
     int a;
    protected:
     int b;
    private:
     int c;
};
// 父类中所有的非静态成员都会被子类继承
// 父类中的私有属性，被编译器隐藏了，所以访问不到，但是已经被子类继承了
class Child:public Base {
    public:
    int d;
};
int main(){
    cout << "sizeOf   " << sizeof(Child)<< endl;
    return 0;
}