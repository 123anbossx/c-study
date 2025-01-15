#include <iostream>
#include <set>
using namespace std;
// set容器的查找和统计
class Person {
    public:
    string m_name;
    int m_age;
    Person(string name,int age){
        this->m_age = age;
        this->m_name = name;
    };
    bool operator<(const Person &other)const{
        return m_age < other.m_age;
    }
};
set<Person>::iterator findSet(const set<Person> &s,const Person &a){
    return s.find(a);
};
void insertSet(set<Person> &s){
    Person a("安波",20);
    Person a1("lisi",21);
    Person a2("lis2",22);
    s.insert(a);
    s.insert(a1);
    s.insert(a2);
   set<Person>::iterator it= findSet(s,a1);
    cout << "查找出来的值" << it->m_name << " " << it->m_age << endl;
};
void printSet(set<Person>&s){
    for(set<Person>::iterator it=s.begin();it!=s.end();it++){
        cout << it->m_name << " " << it->m_age << endl;
    }
};

void test(){
    set<Person>s;
    insertSet(s);
    printSet(s);
}
int main(){
    test();
    return 0;
}