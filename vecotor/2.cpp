#include <iostream>
using namespace std;
class Person {
    public:
      int m_age;
      string m_name;
      Person(int age,string name){
        this->m_age = age;
        this->m_name = name;
      }
};
void test01(){
    Person a(20,"111");
    Person b(30,"222");
    Person c(40,"333");
    Person d(50,"444");
    Person e(60,"555");
    vector<Person>p;
    p.push_back(a);
    p.push_back(b);
    p.push_back(c);
    p.push_back(d);
    p.push_back(e);
    for(vector<Person>::iterator v_b=p.begin();v_b!=p.end();v_b++){
          cout << "姓名：" << v_b->m_name << endl;
          cout << "年龄：" << v_b->m_age << endl;
    }
};
void test02(){
    Person a(20,"111");
    Person b(30,"222");
    Person c(40,"333");
    Person d(50,"444");
    Person e(60,"555");
    vector< vector<Person> > v;
    vector<Person> v1;
    vector<Person> v2;
    vector<Person> v3;  
    vector<Person> v4;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    for(vector<vector<Person> >::iterator vt=v.begin();vt!=v.end();vt++){
        (*vt).push_back(a);
        (*vt).push_back(b);
        (*vt).push_back(c);
        (*vt).push_back(d);
        (*vt).push_back(e);
    }
    for(vector<vector<Person> >::iterator v_b=v.begin();v_b!=v.end();v_b++){
        for(vector<Person>::iterator v_i=(*v_b).begin();v_i!=(*v_b).end();v_i++){
            cout << "姓名："<< v_i->m_name << endl;
            cout << "年龄："<< v_i->m_age << endl;
        }
    }

};
int main(){
    test02();
    return 0;
}