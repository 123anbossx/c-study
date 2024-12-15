#include <QCoreApplication>
#include <iostream>
#include "./MyArray.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    // 有参构造
    MyArray <int> arr1(5);
    // // 拷贝构造
    // MyArray<int> arr2(arr1);
    // // 运算符重载
    // MyArray<int> arr3(100);
    // arr3 = arr1;
    for(int i=0;i<5;i++){
        arr1.push_back(i);
        cout << arr1[i]<< endl;
    };
    return 0;
    // return a.exec();
}
