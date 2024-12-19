#include <iostream>
#include <algorithm>
using namespace std;
   void showvalue(int val){
        cout << val << endl;
    };
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // 第一种
    vector<int>::iterator v_b = v.begin();
    vector<int>::iterator v_e = v.end();
    // while (v_b !=v_e)
    // {
    //     cout << *v_b << endl;
    //     v_b++;
    // }
    // 第二种
    // for(vector<int>::iterator v_b = v.begin();v_b!=v.end();v_b++){
    //     cout << *v_b<< endl;
    // };
    // 第三种
 
    for_each(v_b,v_e,showvalue);

    return 0;
}

