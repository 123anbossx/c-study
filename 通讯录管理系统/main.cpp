#include <iostream>
using namespace std;
#include "header/workerManager.h"
int main(){
    WorkerManager workermanager;
    workermanager.showMenue();
    cout << "按任意键退出...."<<endl;
    cin.get();
    return 0;
}