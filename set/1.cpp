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
void insertSet(set<Person> &s){
   Person p1("anbo",20);
   Person p2("lisi",30);
   Person p3("wangwu",40);
   s.insert(p1);
   s.insert(p3);
   s.insert(p2);
};
void test(){
    set<Person>s;
    insertSet(s);
    printSet(s);
    isEmpt(s);
};
int main(){
    test();
    return 0;
}