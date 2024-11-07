#include <iostream>
using namespace std;
// 用多态实现计算器
class Abstraction {
    public:
     int m_a;
     int m_b;
     virtual int getResult(){
        return 0;
    }
};
class Add:public Abstraction {
    int getResult(){
      return  this->m_a + this->m_b;
    }
};
class Reduce:public Abstraction{
    int getResult(){
        return this->m_a - this->m_b;
    }
};
int main(){
    // 加法
    Abstraction * abs = new Add;
    abs->m_a = 30;
    abs->m_b = 10;
    cout << "m_a+m_b= "<< abs->getResult() << endl;
    delete abs;
    abs = new Reduce;
    abs->m_a = 40;
    abs->m_b = 10;
    cout << "m_a-m_b= "<< abs->getResult()<< endl;
    delete abs;
    return 0;
}