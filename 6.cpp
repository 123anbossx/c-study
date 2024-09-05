#include <iostream>
using namespace std;
int main(){
    string copy = "hello word";   // 首先“字符串必须用双引号括起来”
    char copy2[] = "hello word2";
    cout << "这是一个字符串"<< copy<<endl<<"这是一个c风格的定义方式"<<copy2<<endl;
    return 0;
}