#include "header/manager.h"
Manager::Manager(string name,int eNum,int pNum){
    this->empName= name;
    this->empNum = eNum;
    this->deptNum = pNum;
}
void Manager::showInfo(){
    cout << "员工姓名："<< this->empName << "员工编号："<< this->empNum << "员工部门编号："<< this->deptNum<< endl;
};
string Manager::getDeptname(){
    return "经理";
};
Manager::~Manager(){
    
}