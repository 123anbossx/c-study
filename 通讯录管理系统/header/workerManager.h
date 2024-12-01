#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>
#include "worker.h"
using namespace std;

class WorkerManager {
    public:
      WorkerManager();
      int m_empNum;
      Worker ** m_empArray;
      void showMenue();
      void quitSysTem();
      void addEmp();
      bool isFileValid();
      int getNum();
      void readFile();
      void writeFile();
      void showInfo();
      int exitEmp(int empIt);
      void deleteEmp();
      void editEmp();
      void searchEmp();
      void sortEmp();
      void clearData();
      Worker * getWorkEmp(int empType,string userName,int userNum,int deptNum);
      ~WorkerManager();
};