#include <iostream>
using namespace std; 
// 类做友元
class Build {
    friend class GoodGay;
    public:
     
      string m_liveRoom;
      Build();
    private:
      string m_bedRoom;
};
Build :: Build(){
    this->m_bedRoom = "卧室";
    this->m_liveRoom = "客厅";
};
class GoodGay {
    public:
     Build *build;
     GoodGay();
    void visit();
};
GoodGay :: GoodGay(){
   this->build = new Build;
};
void GoodGay :: visit(){
     cout << "还基友的" << this->build->m_liveRoom << endl;
      cout << "还基友的" << this->build->m_bedRoom<< endl;
};
int main(){
    GoodGay a;
    a.visit();
    return 0;
}