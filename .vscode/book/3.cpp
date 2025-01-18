#include <iostream>
using namespace std;
void test(){
char ch;
int count =0;
cout << "请输入字符，遇到#号符结束" << endl;
cin >> ch;
while (ch != '#')
{
  cout << ch;
   ++count;
   cin >> ch;
}
cout << "输入了"<< count << "个" << "字符"<< endl;
};
void test02(){
    char ch;
    int count =0;
    cout << "请输入字符，遇到#号符结束" << endl;
    cin.get(ch);
    while (ch != '#')
    {
    cout << ch;
    ++count;
    cin.get(ch);
    }
    cout << "输入了"<< count << "个" << "字符"<< endl;  
}
void test03(){
    cout << "请输入任意键结束"<< endl;
    char ch;
    ch = cin.get();
    cout << ch << endl;
}
int main(){
 test03();
 return 0;
}