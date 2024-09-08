#include <iostream>
using namespace std;
int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    cout << "请输入小猪A的体重:"<< endl;
    cin >> A;
    cout << "请输入小猪B的体重:"<<endl;
    cin >> B;
    cout << "请输入小猪C的体重:" << endl;
    cin >> C;
    if(A>B){
        if(A>C){
            cout << "小指A的体重最大";
        }else{
             cout << "小指C的体重最大";
        }
    }else if(B>A){
         if(B>C){
            cout << "小猪B的体重最大"<<endl;
         }else{
            cout << "小猪C的体重最大"<<endl;
         }
    }
}
