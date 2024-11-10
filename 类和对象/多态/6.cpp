#include <iostream>
using namespace std;
//组装计算器
class CPU {
    public:
      virtual void caculate() = 0;
      virtual ~CPU(){

      };
};
class DisPlay {
    public:
      virtual void display() = 0;
      virtual ~DisPlay(){

      };
};
class Memory {
    public:
      virtual void memory() = 0;
      virtual ~Memory(){

      };
};
class InterCpu:public CPU{
    public:
    void caculate(){
        cout << "interCpu开始工作"<< endl;
    }
};
class InterDisplsy:public DisPlay{
    public:
      void display(){
        cout << "inter 显卡开始工作"<< endl;
      };
};
class InterMemory:public Memory{
    public:
      void memory(){
        cout << "inter内存开始工作"<< endl;
      }
};
class LenvoCpu:public CPU{
    public:
    void caculate(){
        cout << "lenvoCpu开始工作"<< endl;
    }
};
class LenvoDisplsy:public DisPlay{
    public:
      void display(){
        cout << "lenvo 显卡开始工作"<< endl;
      }
};
class LenvoMemory:public Memory{
    public:
      void memory(){
        cout << "lenvo内存开始工作"<< endl;
    }
};
class Computer {
    public:
    Computer(CPU *m_cpu,DisPlay *m_play,Memory * m_mem){
        this->m_cpu = m_cpu;
        this->m_play = m_play;
        this->m_mem = m_mem;
    };
    void doWork(){
         this->m_cpu->caculate();
         this->m_mem->memory();
         this->m_play->display();
      };
     ~Computer(){
        cout << "电脑已经执行完毕"<< endl;
        if(this->m_cpu!=NULL){
            delete this->m_cpu;
            this->m_cpu = NULL;
        };
        if(this->m_play !=NULL){
            delete this->m_play;
            this->m_play = NULL;
        };
        if(this->m_mem != NULL){
             delete this->m_mem;
             this->m_mem = NULL;
        };
       
    };
    private:
       CPU * m_cpu;
       DisPlay * m_play;
       Memory * m_mem;
    
};
int main(){
    CPU * levonoCpu = new LenvoCpu;
    Memory * levonoMemery = new LenvoMemory;
    DisPlay * levonoDisplay = new LenvoDisplsy;
    Computer * a = new Computer(levonoCpu,levonoDisplay,levonoMemery);
    a->doWork();
    delete a;
    return 0;
}