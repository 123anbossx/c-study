#include <iostream>
using namespace std;
int main(){
    srand((unsigned)time(NULL)); //生成随机数的种子，要不然生成的随机数不变，是一个伪随机数
    int inNum;
    int num = rand()%100 +1; // 生成一个随机数1-100 范围内的随机数
     cout << "请您输入您猜想的值"<< endl;
    while (inNum != num) // c++中 判断不等于 用 != (js中用!==)
    {  
        cin >> inNum;
        if(inNum>num){
            cout << "您猜大了,请重新猜"<< endl;
        }else if(inNum<num){
            cout << "您猜小了，请重新猜"<< endl;
        }
    }
    cout << "恭喜您猜对了"<<inNum<<endl;
    return 0;
}