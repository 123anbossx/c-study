#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;
class Boss:public Worker{
  public:
  Boss(string name,int eNum,int pNum);
  void showInfo() override;
  string getDeptname() override;
  ~Boss();
};