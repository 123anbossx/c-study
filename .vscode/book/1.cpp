#include <iostream>
using namespace std;
int main(){
    const char arSize = 20;
    char name[arSize];
    char dessert[arSize];
    cout << "enter your name\n";
    cin.getline(name,arSize);
    cout << "enter your faveriter dessert\n";
    cin.getline(dessert,arSize);
    cout << "I have some duplice"<< dessert;
    cout << "for you"<< name<< ".\n";
    return 0;
}