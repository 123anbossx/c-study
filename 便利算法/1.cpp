#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Print01 {
     public:
      void operator()(int a){
          cout << a << " ";
       }
};
void print(int a){
    cout << a << " ";
}
void test01(){
    vector<int>v;
    for(int i=0;i<10;i++){
         v.push_back(i);
    }
    for_each(v.begin(),v.end(),Print01());
    cout << endl;
};
int main(){
    test01();
    return 0;
}