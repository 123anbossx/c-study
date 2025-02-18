#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Person {
    public:
      Person(string name,int age){
        this->m_name = name;
        this->m_age = age;
      };
      bool operator==(const Person &p){
          return (p.m_age==this->m_age && p.m_name==this->m_name);
      };
      string m_name;
      int m_age;
};
void test02(){
    vector<Person>v;
    Person p1("lisi",20);
    Person p2("lis2",21);
    Person p3("lis3",22);
    Person p4("lis4",23);
    Person p5("lis5",24);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    vector<Person>::iterator it= find(v.begin(),v.end(),p1);
    if(it==v.end()){
         cout << "没有找到"<< endl;
    }else{
        cout << "找到了"<< it->m_name <<it->m_age<< endl;
    }
};
void test(){
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    } 
    vector<int>::iterator it = find(v.begin(),v.end(),5);
    if(it==v.end()){
         cout << "没有找到"<< endl;
    }else{
        cout << "找到了"<< *it << endl;
    }
};
int main(){
    test02();
    return 0;
}