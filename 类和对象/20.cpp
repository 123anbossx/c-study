#include <iostream>
using namespace std;
// 继承方式
 // 公共继承： 只能继承公共和保护属性 且父类是什么属性，继承过来就是什么属性
 // 保护继承： 只能继承公共属性和保护属性 ，继承过来都是保护属性
 // 私有继承： 只能继承公共属性和保护属性，继承过来都是私有属性
class Animal {
    public:
       string name;
       void hander(){
           cout << "我可以有动作";
       };
    protected:
      string live;
    private:
       string sex;
       int age;
};
class Person :public Animal {
    public:
      void work(){
         this->name = "李四";
         this->live = "ccccc";
         cout << "a 的名字是" << this->name<< endl;
         cout << "a 的 live 是" << this->live << endl;
      };
};

int main(){
     Person a;
     
    //  a.work();
     
    return 0;
}