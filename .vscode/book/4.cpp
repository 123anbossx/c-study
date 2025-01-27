#include <iostream>
using namespace std;
void test(){
  int i;
  for(i=0;i<5;i++){
    cout << i;
    cout << endl;
  }
}
void test02(){
    int j;
    for(j=0;j<11;j+=3){
        cout << j;
        cout << endl << j << endl;
    }
    // 0
    // 0
    // 3
    // 3
}
void test03(){
    int j=5;
    while (++j <9)
    {
      cout << j++ << endl;
    }
    
}
void test04(){
  for(int i=1;i<65;i*=2){
      cout << i << "\t";
  }
}
void test05(){
  int x=(1,024);
  cout << x << endl;
}
int main(){
    test05();
    return 0;
}