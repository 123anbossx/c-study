#include <iostream>
using namespace std;
// 友元   让一个函数或者类访问另一个一个类中的私有成员
// 友元的三种实现
   // 1，全局函数做友元
   // 2，类做友元
   // 3，成员函数做友元
class Build{
   friend void goodGay(Build *a);
    public :
       string m_livingRoom;
       Build(string liveRoom,string bedRoom){
            this->m_bedroom =bedRoom;
            this->m_livingRoom = liveRoom;
       };
    private:
       string m_bedroom;

};
void goodGay(Build *a){
    cout << "这是好基友的"<< a->m_livingRoom << endl;
    cout << "这是好基友的"<< a->m_bedroom << endl;
};
int main(){
    Build A("客厅","卧室");
    goodGay(&A);
    return 0;
}