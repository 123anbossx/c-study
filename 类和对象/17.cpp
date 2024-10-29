#include <iostream>
using namespace std;

class Myinteger {
    friend ostream & operator<<(ostream &cout, const Myinteger &p); // 改为 const 引用
public:
    Myinteger() {
        this->m_Num = 0;
    }

    // 前置递增，返回当前对象的引用
    Myinteger & operator++() {
        this->m_Num++;
        return *this; // 返回当前对象的引用
    }

    // 后置递增，返回递增前的对象副本 ,返回后变量被销毁 所已输出流重载时，应该加 const
    Myinteger operator++(int) {
        Myinteger temp = *this; // 保存当前对象的副本
        this->m_Num++; // 递增
        return temp; // 返回副本
    }

private:
    int m_Num; // 存储整数值
};

// 输出流重载实现 
ostream & operator<<(ostream &cout,const Myinteger &p) { // 改为 const 引用
    cout << p.m_Num; // 输出 m_Num 的值
    return cout; // 返回输出流
}

int main() {
    Myinteger b;
    cout << b++ << endl; // 使用后置递增
    cout << b << endl; // 输出递增后的值
    return 0;
}