#include <iostream>
using namespace std;

void bubleSort(int *arr,int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j] > arr[j+1]){
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }

        }
    }
}
void coutArr(int *arr, int len){
    for(int i=0;i<len;i++){
        cout << arr[i] << endl;
    }
}
int main(){
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len  = sizeof(arr)/sizeof(arr[0]);
    cout << "arr的首地址"<< &arr<< "首元素的地址"<< &arr[0]<<endl;
    bubleSort(arr,len);
    coutArr(arr,len);
    return 0;
}