#pragma once
#include <iostream>
using namespace std;
template <class T>
class MyArray {
public:
    MyArray(int capacity){
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[capacity];
        cout << "这是有参构造"<< endl;
    };
    MyArray(MyArray & arr){
        this->m_size = arr.m_size;
        this->m_capacity = arr.m_capacity;
        this->pAddress = new T[arr.m_capacity];
        for(int i=0;i<arr.m_capacity;i++){
            this->pAddress[i] = arr.pAddress[i];
        }
        cout << "这是拷贝构造"<< endl;
    };
    MyArray& operator=(MyArray &arr){
        if(this->pAddress!=nullptr){
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_size = 0;
            this->m_capacity = 0;
        };
        this->m_size = arr.m_size;
        this->m_capacity = arr.m_capacity;
        this->pAddress = new T[arr.m_capacity];
        for(int i=0;i<arr.m_capacity;i++){
            this->pAddress[i] = arr.pAddress[i];
        };
        cout << "这是赋值运算符构造"<< endl;
        return *this;
    };
    T& operator[](int index){
        return this->pAddress[index];
    };
    // 尾部添加
    MyArray& push_back(T &value){
        if(this->m_size>=this->m_capacity){
            return  *this;
        };
        this->pAddress[m_size] = value;
        this->m_size++;
        return *this;
    };
    void pop_back(){
        if(this->m_size==0){
            return;
        };
        this->m_size--;
    };
    ~MyArray(){
        cout << "这是析构函数"<< endl;
        if(this->pAddress!=nullptr){
            delete [] this->pAddress;
            this->pAddress = nullptr;
        }
    };

private:
    T * pAddress;
    int m_size;
    int m_capacity;

};
