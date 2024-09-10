#include <iostream>
using namespace std;
int main(){
    //  连续的内存地址
    // 如果直接输出数组，得到的是 数组的内存地址
    // 如果 初始值达不到定义的时的长度，int 型是 0 做填充 string 为空
     //内存是在栈上分配的
     // 数组的大小在编译时确定，不能在运行时改变
     // 在超出作用域时，自动释放内存
    // int arr[6] = {1,2,3};
    // string arr1[5] = {"name","age","like"};
    // for(int i=0;i<5;i++){
    //     cout << "第"+to_string(i+1)+"个元素的值"<< arr[i] << endl;
    // }
    // 以下是定义动态数组
    //使用 new 分配的数组需要使用 delete[] 进行释放
    // 内存是在堆上分配的
    // 数组的大小可以在运行时确定，并且可以根据需要动态调整
    int size = 5;
    int* arr3 = new int[size]{2,3,4,5,6,7};
    for(int j=0;j<size;j++){
        cout << "第"+to_string(j+1)+"个元素的值"<< arr3[j] << endl;
    }
    return 0;
}