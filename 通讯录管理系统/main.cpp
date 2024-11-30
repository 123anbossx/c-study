#include <iostream>
#include "header/workerManager.h"
#include "header/worker.h"
#include "header/employee.h"
using namespace std;
int main(){
    WorkerManager workermanager;
    while (true)
    {
      workermanager.showMenue();
      cout << "请输入您要选择的操作"<< endl;
      int chooseNum;
      cin >> chooseNum;
       switch (chooseNum)
       {
          case 0:
             workermanager.quitSysTem();
            break;
          case 1:
             workermanager.addEmp();
             break;
          case 2:
             workermanager.showInfo();
             break;
          case 3:
             workermanager.deleteEmp();
            break;
          case 4:
             workermanager.editEmp();
            break;
          case 5:
            workermanager.searchEmp();
            break;
       default:
        break;
       }
    }

    return 0;
}