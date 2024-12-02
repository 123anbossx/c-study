#include "header/workerManager.h"
#include "header/employee.h"
#include "header/manager.h"
#include "header/boss.h"
#define filePath "../file/one.txt"
WorkerManager::WorkerManager()
{
  this->m_empNum = 0;
  this->m_empArray = nullptr;
  if(this->isFileValid()){
     this->readFile();  
  }
};
//显示目录 
void WorkerManager::showMenue()
{
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
void WorkerManager::quitSysTem()
{
    cout << "请按任意键退出"<< endl;
    cin.get();
    exit(0);
};
// 添加人员
void WorkerManager::addEmp()
{
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
          int userIndex = this->exitEmp(userNum);
          if(userIndex>-1){
            cout << "此编号已经存在,请重新输入"<< endl;
            i--;
            continue;
          }
          cout << "请输入第"<<i+1<<"位用户的姓名"<< endl;
          cin >> userName;
          cout << "请输入第"<<i+1<<"位用户的部门编号"<< endl;
          cin >> deptNum;
          cout << "请输入第"<<i+1<<"位用户的职位"<< endl;
          cout << "1:老板"<< endl;
          cout << "2:经理"<< endl;
          cout << "3:普通员工"<< endl;
          cin >> userType;
          Worker * tempWorker = this->getWorkEmp(userType,userName,deptNum,deptNum);
          allUserList[this->m_empNum+i] = tempWorker;
          newSize++;
          cout << "成功插入"<< i+1<< "位员工"<< endl;
       }
       // 释放掉之前的内存
      // for_each(cbegin(this->m_empArray),cend(this->m_empArray))
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
// 判断文件是否存在
bool WorkerManager::isFileValid(){
   return filesystem::exists(filePath);
};
// 判断有多少人
int WorkerManager::getNum(){
        int number = 0;
        string name;
        int userId;
        int deptId;
      ifstream ifs;
      ifs.open(filePath,ios::in);
      if(ifs.is_open()){
        while (ifs>>name && ifs>>userId && ifs>>deptId)
        {
          number++;
        }
      }
       return number;
};
// 读取文件
void WorkerManager::readFile()
{
    string name;
    int userId;
    int deptId;
    int index = 0;
    this->m_empNum = this->getNum();
    Worker ** startWorker = new Worker *[this->m_empNum];
    ifstream ifs;
    ifs.open(filePath,ios::in);
    if(ifs.is_open()){
        Worker * worker = nullptr;
       while (ifs>>name && ifs>>userId && ifs>>deptId)
       {
         worker = this->getWorkEmp(deptId,name,userId,deptId);
         startWorker[index] = worker;
         index++;
       }
       this->m_empArray = startWorker;
     
        cout << "一共读取了"<< this->m_empNum << "位成员"<< endl;
    }
    ifs.close();
};
// 写入文件
void WorkerManager::writeFile()
{
  // 创建文件对象
  ofstream ofs;
  // if(filesystem::exists("file")){
  //   filesystem::create_directory("file");
  // }
  ofs.open(filePath, ios::out);
  if (ofs.is_open())
  {
    for (int i = 0; i < this->m_empNum; i++)
    {
      ofs << this->m_empArray[i]->empName << " "
          << this->m_empArray[i]->empNum << " "
          << this->m_empArray[i]->deptNum << endl;
    }
  }
  else
  {
    cout << "打开文件失败" << endl;
  };
  ofs.close();
};
// 显示职工信息
void WorkerManager::showInfo(){
  if(this->m_empNum>0){
     for(int i=0;i<this->m_empNum;i++){
        cout << "姓名："<< this->m_empArray[i]->empName << " 编号："<< this->m_empArray[i]->empNum << " 部门编号："<< this->m_empArray[i]->deptNum<< endl;
     }
  }else{
    cout << "暂无职工信息";
  }
  cout << "按任意键继续。。。"<<endl;
  cin.get();
  cin.get();
};
// 根据 userId 查找用户是否存在
int WorkerManager::exitEmp(int empId){
    int empIndex = -1;
    if(this->m_empNum>0){
       for(int i=0;i<this->m_empNum;i++){
           if(this->m_empArray[i]->empNum==empId){
                empIndex = i;
                break;
           }
       }
    }
    return empIndex;
};
// 删除职工
void WorkerManager::deleteEmp(){
  cout << "请输入删除的员工编号"<< endl;
  int empId;
  cin >> empId;
  int deleteIndex = this->exitEmp(empId);
  if(deleteIndex>-1){
     for(int i=deleteIndex;i<this->m_empNum-1;i++){
        this->m_empArray[i] = this->m_empArray[i+1];
     }
     this->m_empNum--;
     this->writeFile();
     cout << "删除成功";
  }else{
    cout << "删除失败，找不到删除的员工"<< endl;
  }
};
// 编辑用户
void WorkerManager::editEmp(){
     cout << "请输入要修改的人员编号"<< endl;
     int empNum;
     cin >> empNum;
     int editIndex = this->exitEmp(empNum);
     if(editIndex>-1){
          delete this->m_empArray[editIndex];
          string userName;
          int userNum;
          Worker * employee = nullptr;
          cout << "请输入新的人员姓名："<< endl;
          cin >> userName;
          cout << "请输入新的人员编号："<< endl;
          cin >> userNum;
          cout << "请输入新的部门编号："<< endl;
          cout << "1:老板"<< endl;
          cout << "2:经理"<< endl;
          cout << "3:普通员工"<< endl;
          int userType;
          cin >> userType;
          employee = this->getWorkEmp(userType,userName,userNum,userType);
          this->m_empArray[editIndex] = employee;
          this->writeFile();
          cout << "修改成功";
     }else{
      cout <<"修改失败，找不到修改的人员"<<endl;
     }
};
void WorkerManager::searchEmp(){
    cout << "请输入员工姓名："<< endl;
    string userName;
    cin >> userName;
    for(int i=0;i<this->m_empNum;i++){
       if(this->m_empArray[i]->empName == userName){
           cout << "员工姓名："<< this->m_empArray[i]->empName << " "<< "员工编号："<< this->m_empArray[i]->empNum << " "<< "部门部门编号："<< this->m_empArray[i]->deptNum<< endl;
           break;
       }else{
         if(i==this->m_empNum-1){
             cout << "查无此人"<< endl;
         }
       }
    }
};
void WorkerManager::sortEmp(){
    cout << "请选择排序字段"<< endl;
    cout << "1,用户编号"<< endl;
    cout << "2,部门编号"<< endl;
    int sortFile;
    cin >>sortFile; 
    cout << "请选择排序规则"<< endl;
    cout << "1,正序"<< endl;
    cout << "2,倒序"<< endl;
    int sortType;
    cin >> sortType;
    if(sortType==1){
        for(int i=0;i<this->m_empNum;i++){
           for(int j =0;j<this->m_empNum-i-1;j++){
              Worker * tempEmp;
              if(sortFile==1){
                  // 根据用户编号
                   if(this->m_empArray[j]->empNum>this->m_empArray[j+1]->empNum){
                          tempEmp=this->m_empArray[j];
                          this->m_empArray[j] =this->m_empArray[j+1];
                          this->m_empArray[j+1] = tempEmp;
                   }
              }else{
                  // 根据部门编号
                        if(this->m_empArray[j]->deptNum>this->m_empArray[j+1]->deptNum){
                          tempEmp=this->m_empArray[j];
                          this->m_empArray[j] =this->m_empArray[j+1];
                          this->m_empArray[j+1] = tempEmp;
                   }
              }
           }
        }
    }else if(sortType ==2){
       for(int i=0;i<this->m_empNum;i++){
           for(int j =0;j<this->m_empNum-i-1;j++){
              Worker * tempEmp;
              if(sortFile==1){
                  // 根据用户编号
                   if(this->m_empArray[j]->empNum<this->m_empArray[j+1]->empNum){
                          tempEmp=this->m_empArray[j];
                          this->m_empArray[j] =this->m_empArray[j+1];
                          this->m_empArray[j+1] = tempEmp;
                   }
              }else{
                  // 根据部门编号
                        if(this->m_empArray[j]->deptNum<this->m_empArray[j+1]->deptNum){
                          tempEmp=this->m_empArray[j];
                          this->m_empArray[j] =this->m_empArray[j+1];
                          this->m_empArray[j+1] = tempEmp;
                   }
              }
           }
        }
    }
    this->writeFile();
};
void WorkerManager::clearData(){
       cout << "确认清空所有数据?"<< endl;
       cout << "0,取消"<< endl;
       cout << "1,确认"<< endl;
       int select;
       cin >> select;
       if(select==1)
       {
          ofstream ofs(filePath,ios::trunc);
          ofs.close();
          if(this->m_empArray!=nullptr){
              for(int i=0;i<this->m_empNum;i++){
                  delete this->m_empArray[i];
              }
              this->m_empNum=0;
              delete [] this->m_empArray;
              this->m_empArray = nullptr;
          }
       }  
       cout << "清空成功"<< endl; 
};
Worker * WorkerManager::getWorkEmp(int empty,string userName,int userNum,int deptNum){
        Worker * tempWorker;
        switch (empty)
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
            cout << "部门编号输入有误"<< endl;
            break;
          }
      return tempWorker;
}
// 析构函数
WorkerManager::~WorkerManager()
{
  if(this->m_empArray!=NULL){
    for(int i=0;i<this->m_empNum;i++){
       delete this->m_empArray[i];
    }
     delete[] this->m_empArray;
     this->m_empNum = 0;
     this->m_empArray = NULL;
  }
};