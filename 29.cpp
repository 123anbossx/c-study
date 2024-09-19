#include <iostream>
using namespace std;
// 自定义的数据类型
struct student{
   string name;
   int age;
   int score;
};
// 通过学生类型创建具体学生
struct student s1 = {
   "张三",20,30
};
int main(){
    struct student s2;
    s2.name = "李四";
    s2.age = 30;
    s2.score = 40;
    cout << "姓名:" << s1.name << "年龄:"<< s1.age << "分数"<< s1.score << endl;
     cout << "姓名:" << s2.name << "年龄:"<< s2.age << "分数"<< s2.score << endl;
    return 0;
}