#pragma once
#include <iostream>
#include <fstream>
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
      void writeFile();
      ~WorkerManager();
};