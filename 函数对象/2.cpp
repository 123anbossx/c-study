#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Algfive {
    public:
      bool operator()(int val){
            return val >5;
      }
};
void test(){
   vector<int>v;
   for(int i=0;i<10;i++){
      v.push_back(i);
   };
  vector<int>::iterator it= find_if(v.begin(),v.end(),Algfive());
  if(it== v.end()){
    cout << "没有找到"<< endl;
  }else{
    cout << "找到了" << *it << endl;
  }
};
int main(){
    test();
    return 0;
}