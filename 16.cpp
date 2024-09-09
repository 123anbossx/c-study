#include <iostream>
using namespace std;
int main(){
    for(int row = 1;row<=9;row++){
        for(int colum = 1;colum<=9;colum++){
            if(colum<=row){
                 if(colum == row){
                     cout << to_string(colum)  + "*" + to_string(row) + "=" + to_string(colum*row)<<endl;
                 }else{
                     cout << to_string(colum)  + "*" + to_string(row) + "=" + to_string(colum*row)<< "\t";
                 }
            }else{
                 break;
            }
           
        }
    }
    return 0;
}