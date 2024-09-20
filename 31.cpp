#include <iostream>
using namespace std;
struct student {
    string name;
    int age;
    int score;
};
struct teacher {
    string name;
    int age;
    int num;
    struct student stu; 
};
int main(){
    teacher teac;
    teac.name = "安波";
    teac.age = 20;
    teac.num = 1000;
    teac.stu.age = 10;
    teac.stu.name = "赵四";
    teac.stu.score = 20;
    cout << "老师姓名："<< teac.name << "  老师学生的姓名："<< teac.stu.name;
    return 0;
}