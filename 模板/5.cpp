// 模板的局限性
// 模板并不是万能的，有些特定数据类型，需要用具体化的方式做特殊实现
#include<iostream>
using namespace std;

template <typename T>
bool compare(T &a,T &b){
   return a == b;
};
class Person {
    public:
    string m_name;
    int m_age;
    Person(string name,int age){
        this->m_name = name;
        this->m_age = age;
    }
};
bool compare(Person &a,Person &b){
    if(a.m_name == b.m_name && a.m_age == b.m_age){
         return true;
    }else{
        return false;
    }
}
int main(){
    int a = 10;
    int b = 20;
     Person a1("张三",20);
     Person b1("张三",20);
    bool ret = compare(a,b);
    bool ret1 = compare(a1,b1);
    cout << ret << endl;
    cout << ret1 << endl;
    if(ret)
    {
        std::cout << "这是真"<< endl;
    }
    else{
        std::cout << "这是假"<< endl;
    };
    if(ret1){
        std::cout << "这是真 1"<< endl;
    }else{
        std::cout << "这是假 1"<< endl;
    };
   return 0;
}