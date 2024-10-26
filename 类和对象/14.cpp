#include <iostream>
using namespace std;
// 类成语作为友元
class Build;
class GoodGay{
  public:
    GoodGay();
    Build *build;  // 一定要声明成一个指针，因为new 返回的是一个堆内的地址
    void visit();
    void visit2();
};
// Build 类不能声明在Googay类的前面，因为提前声明没有visit 方法
class Build {
    friend void GoodGay::visit();
    public :
       string liveRoom;
       Build();
    private:
       string bedRoom;
};
Build:: Build(){
    this->bedRoom = "卧室";
    this->liveRoom = "客厅";
};
GoodGay :: GoodGay(){
    this->build = new Build;
};
void GoodGay :: visit(){ // 记得类外写实列也要声明 类型 比如void
    cout << "visit要访问build的卧室" << this->build->bedRoom<< endl;
};
void GoodGay :: visit2(){
    cout << "visit2我要访问build的客厅" << endl;
};
int main(){
   GoodGay goodGay;
   goodGay.visit();
    goodGay.visit2();
    return 0;
}