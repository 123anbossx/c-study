#include <iostream>
using namespace std;
void test(){
    char ch;
    int spaceCopunt = 0;
    int charCount = 0;
    cout << "请输入您要统计的字符" << endl;
    std::cin.get(ch);
    while (ch != '.')
    {
      if(ch == ' '){
        spaceCopunt++;
      }else{
        charCount++;
      }
       std::cin.get(ch);
    }
  cout << "space :"<< spaceCopunt << endl;
  cout << "charCount:"<< charCount<< endl;
}
int main(){
    test();
    return 0;
}