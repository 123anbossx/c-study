#include <iostream>
using namespace std;
struct hero{
    string name;
    int age;
    string sex;
};
void sortArr(hero *arr,int len){
   for(int i=0;i<len;i++){
       for(int j=0;j<len-i-1;j++){
            hero temp = arr[j];
            if(arr[j].age>arr[j+1].age){
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       }
   }
   for(int n=0;n<len;n++){
      cout << "姓名: "<< arr[n].name  << " 年龄: "<< arr[n].age << " 性别: "<< arr[n].sex << endl;
   }
};
int main(){
    hero arr[5]={
      {"刘备",23,"男"},
      { "关羽",22,"男"},
      {"张飞",20,"男"},
      {"赵云",21,"男"},
      {"貂蝉",19,"女"}  
    };
    int len = sizeof(arr)/sizeof(arr[0]);
    sortArr(arr,len);
    return 0;
}