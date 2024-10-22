#include <iostream>
using namespace std;
// 利用初始化列表给类赋初始值
class Person {
    public:
     int a;
     int b;
     int c;
    //  Person():a(10),b(20),c(30){

    //  }
    Person(int a,int b,int c) :a(a),b(b),c(c){

    };
};
int main(){
    Person one(10,20,30);
    cout << "a的值：" << one.a << endl;
    cout << "b的值：" << one.b << endl;
    cout << "c的值：" << one.c << endl;
    return 0;
}