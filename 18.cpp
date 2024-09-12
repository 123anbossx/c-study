#include<iostream>
using namespace std;
int main(){
    int length = 5,maxWeight=0;
    int arr[] = {300,350,200,400,200};
    for(int i=0;i<length;i++){
        if(arr[i]>maxWeight){
            maxWeight = arr[i];
        }
    }
    cout << "最重的体重是"<< maxWeight << endl;
    return 0;

}