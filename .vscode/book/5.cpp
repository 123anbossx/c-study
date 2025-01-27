#include <iostream>
#include <array>
using namespace std;
void test(){
    const int intArraySize = 100;
    array<long double,intArraySize> arr;
    arr[1] = arr[0] = 1LL;
    for(int i=2;i<=intArraySize;i++){
        arr[i] = i*arr[i-1];
    }
    cout << "100!=" << arr.back() << endl;
}
void test02(){
    int count = 0;
    int intputValue;
    cout << "请输入您要累加的值" << endl;
    while (intputValue!=0)
    {
        cin >> intputValue;
        count+=intputValue;
        cout <<"累加的结果是："<< count << endl;
        cout << "请输入您要累加的值"<< endl;
    }
}
// void test03(){
//     int principalDap = 100;
//     int principalCle = 100;
//     int year = 1;
//     while (10<dap)
//     {
        
//     }
    
// }
void test04(){
    array<int,12> bookNum;
    int count =0 ;
    for(int i=0;i<12;i++){
      cout <<"请输入"<<(i+1)<<"月份"<< "销售量"<< endl;
      cin >> bookNum[i];
    }  
    for(int i=0;i<12;i++){
         count +=bookNum[i];
    }
    cout << "这一年的销售总量是:"<< count << endl;
}
int main(){
    test04();
    return 0;
}