#include <iostream>
using namespace std;
// 封装，继承，多态
const double PI = 3.14;
class Circle{
   // 访问权限
   // 公共权限
   public:
   // 属性
    int m_r;
   // 行为
   double calculateZC(){
      return 2*m_r*PI;
   };
};
int main(){
     Circle a;
     a.m_r = 10;
     cout << "圆 a 的周长:" << a.calculateZC() << endl;
    return 0;
}