#include <iostream>
using namespace std;
int main(){
    int num1 = 10;
    cout << "int 型占用空间"<< sizeof(num1)<< endl;
    short num2 = 10;
    cout << "short 类型占用空间"<<sizeof(num2)<< endl;
    long num3 = 10;
    cout << "long 类型占用空间" <<sizeof(num3)<< endl;
    long long num4 = 10;
    cout << "long long 类型占用空间"<< sizeof(num4)<<endl;
    cin.get();
}