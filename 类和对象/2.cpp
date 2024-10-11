#include <iostream>
using namespace std;
class Student {
    string name;
    int number;
     public:
    void setStudent(string name,int number){
        this->name = name;
        this->number = number;
    }
    void showStudent(){
        cout << "学生的姓名是: "<< this->name << " 学生的学号是："<< this->number<< endl;
    }
};
int main(){
    Student a;
    a.setStudent("李四",123);
    a.showStudent();
    return 0;
}