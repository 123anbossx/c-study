#include <iostream>
using namespace std;
int main(){
    int score[3][3] = {
        {100,100,100},
        {90,50,100},
        {60,70,80},
    };
    int row = sizeof(score)/sizeof(score[0]);
    int colum = sizeof(score[0])/sizeof(score[0][0]);
    for(int i=0;i<row;i++){
        int scoreall = 0;
        for(int j=0;j<colum;j++){
            scoreall+=score[i][j];
        }
        cout << "三名学生的分数综总和"<< scoreall << endl;
    }
    return 0;
}