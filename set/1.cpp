#include <iostream>
#include <set>
using namespace std;
class Person{
    public:
     string name;
     int age;
     Person(string m_name,int m_age ){
        this->age = m_age;
        this->name = m_name;
     };
    bool operator<(const Person &other)const{
       return age < other.age;
    }
};
void printSet(set<Person>&s){
    for(set<Person>::iterator it=s.begin();it!=s.end();it++){
        cout << it->age << " " << it->name<< endl;
    }
    // for(const Person &p:s){
    //     cout << p.age << " " << p.name<< endl;  
    // }
};
void isEmpt(set<Person> &s){
     if(s.empty()){
        cout << "容器是空"<< endl;
     }else{
        cout << "容器的大小是"<< s.size() << endl;
     }
};
void swapSet(set<Person> &s1,set<Person> &s2){
    s1.swap(s2);
}
void insertSet(set<Person> &s){
   Person p1("anbo",20);
   Person p2("lisi",30);
   Person p3("wangwu",40);
   s.insert(p1);
   s.insert(p3);
   s.insert(p2);
};
void insertSetTwo(set<Person> &s){
   Person p1("anbo1",500);
   Person p2("lisi1",900);
   Person p3("wangwu1",540);
   s.insert(p1);
   s.insert(p3);
   s.insert(p2);
};
void test(){
    set<Person>s;
    set<Person>s2;
    insertSet(s);
    insertSetTwo(s2);
    printSet(s);
    isEmpt(s);
    swapSet(s,s2);
    printSet(s);
};
int main(){
    test();
    return 0;
}