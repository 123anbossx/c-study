#include <iostream>
using namespace std;
int main(){
   int num = rand()%100 +1; // 生成一个1-100 范围内的随机数
    cout << "生成的随机数"<< num<< endl;
    int inNum = 0;
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