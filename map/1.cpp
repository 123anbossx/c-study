#include <iostream>
#include <map>
using namespace std;
void printMp(const map<int,int> &m){
   for(std::map<int,int>::const_iterator it=m.begin();it!=m.end();it++){
        cout << "key: "<< it->first << " "<< "value:"<< it->second << endl;
   }
}
void test(){
    std::map<int,int> mp;
    mp[1] = 1;
    mp[2] = 2;
    printMp(mp);
}
int main(){
    test();
    return 0;
}