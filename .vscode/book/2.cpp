#include <iostream>
#include<vector>
#include <deque>
using namespace std;
void test02(){
     vector<int>v;
    for(int i=0;i<10;i++){
         v.push_back(i);
    }
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
}
void test(){
 deque<int>q;
 for(int i=0;i<10;i++){
    q.push_back(i);
 }
 for(int a:q){
     cout << a << " ";
 }
 cout << endl;
}
int main(){
   test();
    return 0;
}