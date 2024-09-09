// 求水仙花数
#include <iostream>
using namespace std;
int main(){
    int minNum = 100;
    do{
      int num1 = minNum%10;
      int num2 = (minNum/10)%10;
      int num3 = minNum/100;   // int 型 只保留整数位
      int addNum = pow(num1,3) + pow(num2,3) + pow(num3,3);
      if(addNum==minNum){
        cout << "水仙花数:"<<addNum<<endl;
      }
      minNum++;
    }while (minNum<1000);
    return 0;
}
