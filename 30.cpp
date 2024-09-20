#include <iostream>
using namespace std;
struct student {
    string name;
    int age;
    int score;
};
int main(){
   struct student arr[3] = {
       {"张三",20,30},
       {"李四",30,40},
       {"王五",50,60}
   };
   arr[2].name = "赵四";
   for(int i=0;i<3;i++){
       cout << "姓名: " << arr[i].name << " 年龄: " << arr[i].age << " 分数: "<< arr[i].score << endl;
   };
   // 通过指针访问
    struct student *p = arr;
     for(int j=0;j<3;j++){
         cout << "姓名:" << p->name << " 年龄: "<< p->age << " 分数: "<< p->score << endl;
         p++;
     };
    return 0;
}