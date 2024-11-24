#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker {
    public:
      int empNum;
      string empName;
      int deptNum;
      virtual void showInfo() = 0;
      virtual string getDeptname() = 0; 
};