#include "header/boss.h"
Boss::Boss(string name,int eNum,int pNum){
    this->empName= name;
    this->empNum = eNum;
    this->deptNum = pNum;
}
void Boss::showInfo(){
    cout << "员工姓名："<< this->empName << "员工编号："<< this->empNum << "员工部门编号："<< this->deptNum<< endl;
};
string Boss::getDeptname(){
    return "老板";
};
Boss::~Boss(){
    
}