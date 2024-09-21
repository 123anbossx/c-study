#include <iostream>
using namespace std;
struct student {
    string name;
    int age;
    int score;
};
void printStu(struct student stu){
    stu.age = 100;
    cout <<"学生的姓名："<< stu.name << " 学生的年龄 "<< stu.age << endl;
};
void printStu2(struct student *p){
    p->name = "李四";
   cout << "这是引用传递中的打印"<< p->name << endl;
}
int main(){
   struct student s;
    s.age = 20;
    s.name = "anbo";
    s.score = 30;
    // 通过值传递
    printStu(s);
    cout << "在main函数中的年龄值："<< s.age << endl;
    // 通过引用传递
    printStu2(&s);
    return 0;
}