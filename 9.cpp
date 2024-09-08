#include <iostream>
using namespace std;
int main(){
    int score = 0;
     cout << "请输入您的分数"<< endl;
     cin >> score;
     if(score>=600){
        if(score>=650){
            cout << "恭喜您，考上了清华";
        }else if(score>=700){
            cout << "恭喜您，考入北大";
        }
     }else if(score>=500){
        cout << "恭喜您，考入二本";
     }else if(score>=400){
        cout << "恭喜您，考入三本";
     }else{
        cout << "很遗憾，您没有考上本科";
     }
    return 0;
}