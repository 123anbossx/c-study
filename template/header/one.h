#pragma once
#include <iostream>
using namespace std;
template <class Tname, class Tage>
class Person {
public:
    Tname m_name;
    Tage m_age;
    Person(Tname name,Tage age);
    void showInfo();
};
