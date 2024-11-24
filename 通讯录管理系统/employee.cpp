#include "header/employee.h"
Employee::Employee(string name,int eNum,int pNum){
    this->empName= name;
    this->empNum = eNum;
    this->deptNum = pNum;
}
void Employee::showInfo(){
    cout << "员工姓名："<< this->empName << "员工编号："<< this->empNum << "员工部门编号："<< this->deptNum<< endl;
};
string Employee::getDeptname(){
    return "普通员工";
};
Employee::~Employee(){
    
}