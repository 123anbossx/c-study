#include <iostream>
using namespace std;
#include <fstream>
// 二进制方式读写文件
class Person {
    public:
      char m_name[64];
      int m_age;
};
void wrightFile(){
    Person p = {
        "张三",20
    };
    // 创建文件对象
    ofstream ofs;
    // 打开文件
    ofs.open("person.txt",ios::out | ios::binary);
    // 写入文件
    ofs.write((const char *)&p,sizeof(Person));
    // 关闭
    ofs.close();
};
// 读取数据
void readFile(){
    Person p;
   // 创建文件对象
   ifstream ifs;
   // 打开文件对象
   ifs.open("person.txt",ios::in | ios::binary);
   // 判断打开成功
   if(ifs.is_open()){
        ifs.read((char *)&p,sizeof(Person));
        cout << "姓名："<< p.m_name << "其他："<< p.m_age<< endl;
        ifs.close();
   }
}
int main(){
    readFile();
    return 0;
}