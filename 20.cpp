#include <iostream>
using namespace std;
int main(){
    int arr[9] = {2,4,0,5,7,1,3,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << length << endl;
    for(int i=0;i<length;i++){
       for(int j=0;j<length-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       } 
    }
    for(int n = 0;n<length;n++){
        cout << arr[n]<< " ";
    }
    return 0;
}