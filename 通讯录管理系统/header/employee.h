#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;
class Employee:public Worker{
  public:
  Employee(string name,int eNum,int pNum);
  void showInfo() override;
  string getDeptname() override;
  ~Employee();
};