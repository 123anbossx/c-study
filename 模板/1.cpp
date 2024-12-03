#include <iostream>
using namespace std;
template <typename T>
void mySwip(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    // mySwip(a,b);
    mySwip<int>(a,b);
    cout << a << "   "<< b<< endl;
    return 0;
}