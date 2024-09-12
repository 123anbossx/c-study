#include <iostream>
using namespace std;
int main(){
    int temp = 0;
    int arr[] = {1,3,2,5,4};
    int start = 0;
    int length = sizeof(arr)/sizeof(arr[0]);
    int end = length-1;
    for(int i=0;i<length;i++){
        if(start <end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }else{
            break;
        }

    }
    for(int j=0;j<length;j++){
        cout << "打印每一个元素的值:"<<arr[j]<<endl;
    }
    return 0;
}