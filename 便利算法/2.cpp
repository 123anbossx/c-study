#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class interFace {
    public:
     int operator()(int val){
         return val+100;
      };
};
class interFace2 {
    public:
      void operator()(int val){
            cout << val << " ";
      };
};
void test01(){
     vector<int>v;
     vector<int>v2;
  
     for(int i=0;i<10;i++){
        v.push_back(i);
     };
    v2.resize(v.size());
     transform(v.begin(),v.end(),v2.begin(),interFace());
     for_each(v2.begin(),v2.end(),interFace2());
};
int main(){
    test01();
    return 0;
}