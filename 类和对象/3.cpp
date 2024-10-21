#include <iostream>
using namespace std;
// 权限  1，公有 (public)  成员类内/类外可以访问到
//      2 保护 （protected） 类内可以访问 类外不可以访问
//      3 私有 (private) 类内可以访问 类外不可以访问
class Clube {
   private:
     int height;
     int width;
     int line;
   public:
    void setH(int h){
        this->height = h;
    }
    int getH(){
       return this->height;
    }
    int getw(){
      return this->width;
    }
    int getl(){
       return this->line;
    }
    void setw(int w){
        this->width = w;
    }
    void setL(int l){
         this->line = l;
    }
    int gettj(){
        return this->line * this->height*this->width;
    }
};
void isSameClube(Clube &a,Clube &b){
  if(a.getH() == b.getH() && a.getl() == b.getl() && a.getw() == b.getw() ){
      cout << "a,b 两个立方体相等"<<endl;
  }else{
      cout << "a,b,两个立方体不相等"<<endl;
  }
};
int main(){
    Clube a;
    Clube b;
    a.setH(20);
    a.setL(20);
    a.setw(20);
    cout << "立方体a的体积:"<< a.gettj() << endl;
    b.setH(20);
    b.setL(20);
    b.setw(30);
    isSameClube(a,b);
    return 0;
}