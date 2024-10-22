#include <iostream>
using namespace std;
// 深拷贝，浅拷贝
class Person {
    public:
    int * height;
    int age;
    Person(int age,int height){
       this->age = age;
       this->height = new int(height);
    };
    Person(const Person &p){
        this->age  =p.age;  // 浅拷贝
        // this->height = p.height; // 浅拷贝
        // 深拷贝
          this->height = new int(*p.height);
    }
    ~Person(){
        // 会产生重复释放
        if(this->height !=NULL){
              delete this->height;
              this->height = NULL;
        }
    }
};
void test01(){
    Person a(10,149);
    Person b(a);
    cout << "a的年龄和身高"<< a.age<<" "<< *a.height;
     cout << "b的年龄和身高"<< b.age<<" "<< *b.height;
};
int main(){
    test01();
    return 0;
}