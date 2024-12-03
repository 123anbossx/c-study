#include <iostream>
using namespace std;
template <typename T>
void sort(T arr[],int length){
    for(int i=0;i<length;i++){
        int maxIndex = i;
        for(int j=i+1;j<length;j++){
             if(arr[maxIndex]<arr[j]){
                 maxIndex = j;
             }
        }
      swap(arr[maxIndex],arr[i]);
    }
};
template <typename T>
void swap(T &a,T &b){
    T temp  = a;
    a = b;
    b = temp;
};
template <typename T>
void showSortResult(T arr[],int length){
    for(int i=0;i<length;i++){
         cout << arr[i] << endl;
    }
};
int main(){
    // int arr[5] = {2,5,1,8,3};
    // sort(arr,sizeof(arr)/sizeof(int));
    // showSortResult(arr,sizeof(arr)/sizeof(int));
    char arr[] = "heollworkd";
    sort(arr,sizeof(arr)/sizeof(char));
    showSortResult(arr,sizeof(arr)/sizeof(char));
    return 0;
}