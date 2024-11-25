#include "header/workerManager.h"
#include "header/employee.h"
#include "header/manager.h"
#include "header/boss.h"
#define filePath "../file/one.txt"
WorkerManager::WorkerManager(){
  this->m_empNum = 0;
  this->m_empArray = NULL;
};
void WorkerManager::showMenue(){
    cout << "**********************************************"<< endl;
    cout << "**********欢迎使用职工管理系统*******************"<< endl;
    cout << "**********0，退出管理程序***********************"<< endl;
    cout << "**********1，增加职工信息***********************"<< endl;
    cout << "**********2，显示职工信息***********************"<< endl;
    cout << "**********3，删除离职职工***********************"<< endl;
    cout << "**********4，修改职工信息***********************"<< endl;
    cout << "**********5，查找职工信息***********************"<< endl;
    cout << "**********6，按照编号排序***********************"<< endl;
    cout << "**********7， 清空所有文档***********************"<< endl;
    cout << endl;
};
// 退出程序
void WorkerManager::quitSysTem(){
    cout << "请按任意键退出"<< endl;
    cin.get();
    exit(0);
};
void WorkerManager::addEmp(){
   cout << "请输入要添加的人数"<< endl;
   int inputSize = 0;
   int newSize = this->m_empNum;
   cin >> inputSize;
   if(inputSize>0){
       int arrSize = inputSize + this->m_empNum;
       // 生成新的存储列表
       Worker ** allUserList = new Worker *[arrSize];
       if(this->m_empArray!=NULL){
            for(int i=0;i<this->m_empNum;i++){
                allUserList[i]= this->m_empArray[i];
            }
       }
       // 插入新数据
       for(int i=0;i<inputSize;i++){
         int userNum;
         string userName;
         int deptNum;
         int userType;
          cout << "请输入第"<<i+1<<"位用户的编号"<< endl;
          cin >> userNum;
          cout << "请输入第"<<i+1<<"位用户的姓名"<< endl;
          cin >> userName;
          cout << "请输入第"<<i+1<<"位用户的部门编号"<< endl;
          cin >> deptNum;
          cout << "请输入第"<<i+1<<"位用户的职位"<< endl;
          cout << "1:老板"<< endl;
          cout << "2:经理"<< endl;
          cout << "3:普通员工"<< endl;
          cin >> userType;
          Worker * tempWorker;
          switch (userType)
          {
          case 1:
             {
                tempWorker = new Boss(userName,userNum,deptNum);
              }
            break;
          case 2:
             {
                tempWorker = new Manager(userName,userNum,deptNum);
              }
             break;
          case 3:
              {
                tempWorker = new Employee(userName,userNum,deptNum);
              }
             break;
          default:
            break;
          }
          allUserList[this->m_empNum+i] = tempWorker;
          newSize++;
          cout << "成功插入"<< i+1<< "位员工"<< endl;
       }
       // 释放掉之前的内存
       delete[] this->m_empArray;
       // 指向新的内存
       this->m_empArray = allUserList;
       this->m_empNum = newSize;
       // 写入文件
       this->writeFile();
   }else{
     cout << "输入有误，请重新输入"<< endl;
   }
};
void WorkerManager::writeFile(){
  // 创建文件对象
    ofstream ofs;
    // if(filesystem::exists("file")){
    //   filesystem::create_directory("file");
    // }
    ofs.open(filePath,ios::out);
    if(ofs.is_open()){
       for(int i=0;i<this->m_empNum;i++){
          ofs<<this->m_empArray[i]->empName << " "
            << this->m_empArray[i]->empNum << " "
            << this->m_empArray[i]->deptNum<< endl;
       }
    }else{
      cout << "打开文件失败"<< endl;
    };
    ofs.close();
};
WorkerManager::~WorkerManager(){
  if(this->m_empArray!=NULL){
     delete[] this->m_empArray;
     this->m_empArray = NULL;
  }
};