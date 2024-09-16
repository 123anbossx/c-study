#include <iostream>
using namespace std;
int main(){
    // 空指针是指向编号为0 的内存，不可以访问，系统占用0-255
    int *p = NULL;
    cout << "指针p的内存地址："<< &*p<< endl;
    return 0;
}