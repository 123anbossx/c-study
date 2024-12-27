#include<iostream>
using namespace std;
//vector 初始化
struct Person{
   string name;
   int age;
};

void printVector(vector<Person> &v){
  for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
      cout << it->age<< " "<< it->name<< " ";
  }
    cout << endl;
};
void printVectorInt(vector<int> &v){
      for(vector<int>::iterator it=v.begin();it!=v.end();it++){
      cout << *it<< " ";
  }
    cout << endl;
}
void test(){
    vector<Person>v;
    for(int i=0;i<10;i++){
        Person s={"lisi"+to_string(i),i};
        v.push_back(s);
    };
    printVector(v);
    // 通过区间的形式
   vector<Person>v2(v.begin(),v.end());
   printVector(v2);
   // n个 elem 方式构造
   vector<int>v3(10,200);
   printVectorInt(v3);
   // 拷贝构造
   vector<int>v4(v3);
   printVectorInt(v4);

};
int main(){
    test();
    return 0;
}