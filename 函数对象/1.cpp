#include <iostream>
using namespace std;
class Person {
    public:
        Person(){
        this->count=0;
       };
       int operator()(int a,int b){
           this->count++;
           return a+b;
        
       };
       int count;
};
void test(){
    Person p;
    cout <<"两个数相加="<<p(10,20) << endl;
    cout << "一共掉用了" << p.count << "次"<< endl;
}
int main(){
    test();
    return 0;
}