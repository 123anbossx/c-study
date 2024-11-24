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
       default:
        break;
       }
    }

    return 0;
}