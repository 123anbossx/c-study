#include <iostream>
#include <fstream>
using namespace std;
// 写文件
void wrightFile(){
    // 创建文件对象
    ofstream ofs;
    // 选择打开方式
    ofs.open("test.txt",ios::out);
    ofs << "name: 张三"<< endl;
    ofs << "age: 20"<< endl;
    ofs << "love: eee"<< endl;
    ofs.close();
};
// 格式化读文件
void readFile1(){
    // 创建 文件对象
    ifstream ifs;
    char buf[1024] = {0};
    // 打开读取的文件
    ifs.open("test.txt",ios::in);
    // 判断打开文件是否成功
    if(ifs.is_open()){
          // 读数据
        while (ifs >> buf)
        {
            cout << buf<< endl;
        };
        ifs.close();
    }else{
        cout << "读取文件失败"<< endl;
    }   
}
// 读取单个字符
void readFileTwo(){
    //创建文件对象
    ifstream ifs;
    char buf;
    // 打开要读取的文件
    ifs.open("test.txt",ios::in);
    //判断打开是否成功
    if(ifs.is_open()){
        // 遇到中文会出现乱码的情况
        while (ifs.get(buf))
        {
            cout << buf<< endl;
        };
        ifs.close(); 
    }else{
        cout << "文件打开失败";
    };
};
// 单行读取
void readFile3()
{
    // 创建文件对象
    ifstream ifs;
    // 打开要读取的文件
    ifs.open("test.txt",ios::in);
    char buf[1024] = {0};
    // 判断打开成功
   if(ifs.is_open()) {
        while (ifs.getline(buf,sizeof(buf)))
        {
           cout << buf<< endl;
        };
        
   }else{
    cout << "文件打开失败"<< endl;
   };
};
// 全局函数读取
void readFile4(){
    // 创建文件对象
    ifstream ifs;
    // 打开读取的文件
    ifs.open("test.txt",ios::in);
    string buf;
    if(ifs.is_open()){
        while (getline(ifs,buf))
         {
            cout << buf << endl ;
         }
    }

};
int main(){
    wrightFile();
    readFile4();
    return 0;
}