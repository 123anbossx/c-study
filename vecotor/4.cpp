#include <iostream>
using namespace std;
// vector 赋值
class Person {
    public:
    string name;
    int age;
};
void printVector(vector<Person> &v){
    for(vector<Person>::iterator v_b=v.begin();v_b!=v.end();v_b++){
         cout << v_b->name << " "<< v_b->age << " ";
    }
    cout << endl;
};
void vectorEdit(vector<Person> &v){
    vector<Person>::iterator v_start = v.begin();
    v_start->name = "张三";
}
void test(){
    vector<Person> p;
    for(int i=0;i<10;i++){
        Person a={"ab"+std::to_string(i),i};
        p.push_back(a);
    }
    vector<Person> p1;
    p1 = p;
   vectorEdit(p1);
    printVector(p1); 
    printVector(p);

};
int main(){
    test();
    return 0;
}