
    #include "header/one.h">
    using namespace std;
    template <class Tname,class Tage>
    Person<Tname,Tage>::Person(Tname name,Tage age){
        this->m_name = name;
        this->m_age = age;
    };
    template<class Tname,class Tage>
    void Person<Tname,Tage>::showInfo(){
        std::cout << "name: "<< this->m_name << endl;
        std::cout << "age: "<< this->m_age << endl;
    };
    int main(int argc, char *argv[])
    {
        Person <string,int> a("李四",20);
        a.showInfo();

        return 0;
    }
