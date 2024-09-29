#include <iostream>
using namespace std;
#define max 1000
struct contacts{
    string name;
    string sex;
    int age;
    long phone;
    string address;
};
struct addressBook{
    contacts abs[max];
    int m_size;
};
void showMenu(){
   cout << "1, 添加联系人"<< endl;
   cout << "2, 显示联系人"<< endl;
   cout << "3, 删除联系人"<< endl;
   cout << "4, 查找联系人"<< endl;
   cout << "5, 修改联系人"<< endl;
   cout << "6, 清空联系人"<< endl;
   cout << "0, 退出系统"<< endl;
};
void addContacts(addressBook *p){
    if(p->m_size>=max){
        cout << "已经超过上限了,无法正常添加"<< endl;
    }else{
        cout << "请输入姓名:"<< endl;
        cin >> p->abs[p->m_size].name;
        cout << "请输入性别:" << endl;
        cin >> p->abs[p->m_size].sex;
        cout << "请输入年龄:"<< endl;
        cin >> p->abs[p->m_size].age;
        cout << "请输入地址:"<< endl;
        cin >> p->abs[p->m_size].address;
        cout << "请输入电话:"<< endl;
        cin >> p->abs[p->m_size].phone;
        cout << "添加成功"<< endl;
        p->m_size++;
    }
};
// 展示联系人
void showContacts(addressBook *p){
    if(p->m_size==0){
        cout << "通讯录中没有记录人员"<< endl;;
    }else{
        for(int i=0;i<p->m_size;i++){
            cout << "姓名："<< p->abs[i].name <<  " 年龄：" << p->abs[i].age<< " 性别："<< p->abs[i].sex<< " 电话："<< p->abs[i].phone<<" 地址："<< p->abs[i].address<<endl;
        }
    }
};
// // 检查联系人是否存在，如果存在 返回 具体位置 ，不存在返回-1
int isExist(addressBook *p,string name){
    for(int i=0;i<p->m_size;i++){
        if(p->abs[i].name == name){
            return i;
        }
    }
    return -1;
};
// 删除联系人
void deleteContacts(addressBook *p){
        string deleteUserName;
        cout << "请输入您要删除的人名"<< endl;
        cin >> deleteUserName; 
       int existIndex = isExist(p,deleteUserName);   
       if(existIndex == -1){
            cout << "您要删除的人员不存在"<< endl;
       }else{
          for(int i=existIndex;i<p->m_size;i++){
            p->abs[i] = p->abs[i+1];
            p->m_size = p->m_size-1;
          }
          cout << "删除成功"<< endl;
       }
};
  void findContacts(addressBook *p){
   string name;
   cout << "请输入要查找的人员姓名:"<< endl;
   cin >> name;
   for(int i=0;i<p->m_size;i++){
      if(p->abs[i].name == name){
         cout << "姓名:"<< p->abs[i].name << " 年龄："<< p->abs[i].age<< endl;
         break;
      }else{
       cout << "查无此人";
      }
   }
};
void editContacts(addressBook *p){
  string editUser;
  cout << "请输入要编辑的用户姓名："<< endl;
  cin >> editUser;
  int existIndex = isExist(p,editUser); 
  if(existIndex ==-1){
     cout << "没有找到您要修改的用户"<< endl;
  }else{
    cout << "您现在要修改的用户姓名："<< p->abs[existIndex].name<< endl;
    cout << "请输入您现在想要的修改的名字："<< endl;
    cin >> p->abs[existIndex].name;
  }
};
int main(){
   addressBook abs;
   abs.m_size = 0;
      while (true)
        {
            showMenu();
                int useSelect;
                cin >> useSelect;
                    switch (useSelect)
                        {
                        case 1:
                            // 添加联系人
                            addContacts(&abs);
                            break;
                        case 2:
                           showContacts(&abs);
                            // 显示联系人
                            break;
                        case 3:
                           deleteContacts(&abs);
                            // 删除联系人
                            break;
                        case 4:
                          findContacts(&abs);
                            // 查找联系人
                            break;
                        case 5:
                        editContacts(&abs);
                        // 修改联系人
                        break;
                        case 0:
                            // 退出
                            cout << "欢迎下次使用,按任意键退出"<< endl;
                            cin.get();
                            return 0;
                            break;
                        default:
                            break;
                        }
        }
  

    return 0;
}