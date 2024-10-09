#include <iostream>
using namespace std;
// 常量引用
// 用来修饰形参，防止误操作
void test(const int &val){
    // 不加const 就可以在 函数中修改这个引用值
    cout << val << endl;
}
int main(){
    //  int& ref = 10; // 不允许，不能讲一个常量 赋值给一个引用，必须是一个合法的内存空间
     const int& ref = 10; // 这样时允许的，编译器将代码修改为  int temp = 10; const int& ref = temp;
     test(ref);
     cout << ref<< endl;
    return 0;
}
