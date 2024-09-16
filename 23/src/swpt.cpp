#include "../include/swpt.h"
void swpt(int a,int b){
    int temp = 0;
     temp = b;
     b= a;
     a= temp;
     cout << "a="<< a << endl<< "b="<< b<< endl;
}