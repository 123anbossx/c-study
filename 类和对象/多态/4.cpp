#include <iostream>
using namespace std;
class AbstructDrink{
    public:
    // 煮水
     virtual void boilWater()=0;
    // 冲泡
     virtual void brewing() = 0;
     // 加入辅料
     virtual void pushAccessories() =0;
     virtual void all() = 0;
};
class Tea:public AbstructDrink{
    public:
       void boilWater(){
          cout << "煮山泉"<< endl;
       };
       void brewing(){
         cout << "开始冲泡茶水"<< endl;
       };
       void pushAccessories(){
         cout << "放入茶叶"<< endl;
       };
       void all(){
          this->boilWater();
          this->brewing();
          this->pushAccessories();
       };
};
int main(){
    AbstructDrink * abs = new Tea;
    abs->all();
    return 0;
}