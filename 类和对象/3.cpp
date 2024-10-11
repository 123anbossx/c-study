#include <iostream>
using namespace std;
// 权限  1，公有 (public)  成员类内/类外可以访问到
//      2 保护 （protected） 类内可以访问 类外不可以访问
//      3 私有 (private) 类内可以访问 类外不可以访问
class Person {
    public:
      string name;
    protected:
      string m_Car;
    private:
      int m_password;
    
}
int main(){
    return 0;
}