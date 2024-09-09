#include <iostream>
using namespace std;
int main(){
    for(int num=1;num<=97;num++){
        if(num%7==0 || num%10 == 7 || num/10 == 7){
            cout << "敲桌子" << num << endl;
        }else{
            cout << num << endl;
        }
    }
    return 0;
}