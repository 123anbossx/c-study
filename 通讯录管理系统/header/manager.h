#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;
class Manager:public Worker{
  public:
  Manager(string name,int eNum,int pNum);
  void showInfo() override;
  string getDeptname() override;
  ~Manager();
};