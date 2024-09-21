#include <iostream>
using namespace std;
struct student {
    string name;
    int score;
};
struct teacher {
    string name;
    student arr[5];
};
void wrightInfo(teacher *arr){
   srand((unsigned)time(NULL));
   for(int i=0;i<3;i++){
       arr[i].name = "teacher"+to_string(i);
       for(int j=0;j<5;j++){
          int score = rand()%100 +1;
          arr[i].arr[j].name = "student"+to_string(i)+'_'+to_string(j);
          arr[i].arr[j].score = score;
       }
   }
};
void printValue(teacher *arr){
   for(int i=0;i<3;i++){
      cout << "老师的姓名:" << arr[i].name << endl;
      for(int j=0;j<5;j++){
        cout << "学生姓名：" <<  arr[i].arr[j].name << "学生分数：" << arr[i].arr[j].score<< endl;
      }
   }
}
int main(){
    teacher arrTeacher[3];
    wrightInfo(arrTeacher);
    printValue(arrTeacher);
    return 0;
}