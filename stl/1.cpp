#include<iostream>
#include <vector>
#include <map>
using namespace std;
class Worker {
    public:
      string m_name;
      int salary;
};
void createWorker(vector<Worker> &v){
    string workerNames = "ABCDEFGHIJ";
    for(int i=0;i<10;i++){
          Worker worker;
          string workerName = "员工";
          int salaery = rand()%10000 + 10000;
          workerName+=workerNames[i];
          worker.m_name = workerName;
          worker.salary = salaery;
          v.push_back(worker);
    }
};
void setGroup(multimap<int,Worker> &m,vector<Worker> &v){
   for(vector<Worker>::iterator it=v.begin();it!=v.end();it++){
         int depId = rand()%3;
         m.insert(make_pair(depId,*it));
   }
};
void showGroup(multimap<int,Worker>&mm){
    // for(auto mm_ :mm){
    //     cout << "部门编号："<< mm_.first << "姓名："<< mm_.second.m_name << "工资："<< mm_.second.salary<< endl;
    // }
    int count = mm.count(0);
    int index = 0;
    for(multimap<int,Worker>::iterator pos=mm.find(0);pos!=mm.end()&&index<count;pos++,index++){
         cout << "部门编号："<< pos->first<< "姓名："<< pos->second.m_name << "工资："<< pos->second.salary<< endl;
    }
};
int main(){
    vector<Worker> v;
    multimap<int,Worker> mapWork;
    createWorker(v);
    setGroup(mapWork,v);
    showGroup(mapWork);
    // for(vector<Worker>::iterator it=v.begin();it!=v.end();it++){
    //  
    // }
    return 0;
}