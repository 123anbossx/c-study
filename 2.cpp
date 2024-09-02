#include <iostream>
using namespace std;
int main(){
    // 短整型
    short num = 10; // 取值范围 -2^15-2^15-1 占2字节
    int num1 = 10; //-2^31-2^31-1 // 占4字节
    long num2 = 10;// -2^31-2^31-1  32位操作系统占4字节 64位操作系统占8字节
    long long num3 = 10; // -2^63 - 2^63-1  占8个字节
    cout <<"short型数据="<<num<<endl
    <<"int型数值="<<num1<<endl
    <<"long 型数值="<<num2<<endl
    <<"long long 型长整树="<<num3<<endl;
}