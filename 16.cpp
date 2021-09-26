//
// Created by shuho on 2021/9/26.
//

#include <iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct Person{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
//设计通讯录结构体
struct AddressBooks{
    struct Person personArray[MAX];
    int m_Size;
};

void clearScreen(){
    system("pause"); //请输入任意键继续
    system("cls"); // 清屏
}

//显示菜单
void showMenu(){
    cout << "*******************" << endl;
    cout << "**** 1.添加联系人 ****" << endl;
    cout << "**** 2.显示联系人 ****" << endl;
    cout << "**** 3.删除联系人 ****" << endl;
    cout << "**** 4.查找联系人 ****" << endl;
    cout << "**** 5.修改联系人 ****" << endl;
    cout << "**** 6.清空联系人 ****" << endl;
    cout << "**** 0.退出通讯录 ****" << endl;
    cout << "*******************" << endl;
}

void addPerson(AddressBooks *pBooks) {
    if (pBooks->m_Size==MAX) cout << "通讯录已满，无法添加！！！" << endl;
    else{
        string name;
        cout << "请输入姓名：" << endl;
        cin>>name;
        pBooks->personArray[pBooks->m_Size].m_Name=name;

        while (true){
            cout << "请输入性别：" << endl;
            cout << "1------男" << endl;
            cout << "2------女" << endl;
            int sex=0;
            cin>>sex;
            if (sex==1 || sex==2){
                pBooks->personArray[pBooks->m_Size].m_Sex=sex;
                break;
            }
            cout << "输入有误，请重新输入！！！" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age=0;
        cin>>age;
        pBooks->personArray[pBooks->m_Size].m_Age=age;

        cout << "请输入联系电话：" << endl;
        string phone;
        cin>>phone;
        pBooks->personArray[pBooks->m_Size].m_Phone=phone;

        cout << "请输入家庭住址：" << endl;
        string address;
        cin>>address;
        pBooks->personArray[pBooks->m_Size].m_Addr=address;

        pBooks->m_Size = pBooks->m_Size + 1;
        
        cout << "添加成功！！！" << endl;
    }
}

void showPerson(AddressBooks *pBooks) {
    if (pBooks->m_Size==0) cout << "当前的记录为空!!!" << endl;
    else {
        for (int i = 0; i < pBooks->m_Size; ++i){
            cout << "序号：" << (i + 1) << "\t";
            cout << "姓名：" << pBooks->personArray[i].m_Name << "\t";
            cout << "性别：" << (pBooks->personArray[i].m_Sex==1?"男":"女") << "\t";
            cout << "年龄：" << pBooks->personArray[i].m_Age << "\t";
            cout << "电话：" << pBooks->personArray[i].m_Phone << "\t";
            cout << "住址：" << pBooks->personArray[i].m_Addr << endl;
        }
    }
}

//检测联系人是否存在
int isExist(AddressBooks *abs,string name){
    for (int i = 0; i < abs->m_Size; ++i){
        if (abs->personArray->m_Name==name) return i;
    }
    return -1;
}

void deletePerson(AddressBooks *pBooks) {
    cout << "请输入您要删除的联系人：" << endl;
    string name;
    cin>>name;
    int ret = isExist(pBooks, name);
    if (ret==-1) cout << "查无此人" << endl;
    else {
        for (int i = ret; i < pBooks->m_Size; ++i){
            pBooks->personArray[i]=pBooks->personArray[i+1];
        }
        pBooks->m_Size--;
        cout << "删除成功！！！" << endl;
    }
}

//查找指定联系人
void findPerson(AddressBooks *pBooks) {
    cout << "请输入您要查找的联系人：" << endl;
    string name;
    cin>>name;
    int ret = isExist(pBooks, name);
    if (ret==-1) cout << "查无此人！！！" << endl;
    else{
        cout << "姓名：" << pBooks->personArray[ret].m_Name << "\t";
        cout << "性别：" << (pBooks->personArray[ret].m_Sex==1?"男":"女") << "\t";
        cout << "年龄：" << pBooks->personArray[ret].m_Age << "\t";
        cout << "电话：" << pBooks->personArray[ret].m_Phone << "\t";
        cout << "住址：" << pBooks->personArray[ret].m_Addr << endl;
    }
}
//修改指定联系人信息
void modifyPerson(AddressBooks *pBooks) {
    cout << "请输入您要修改的联系人：" << endl;
    string name;
    cin>>name;
    int ret = isExist(pBooks, name);
    if (ret==-1) cout << "查无此人!!!" << endl;
    else {
        string name;
        cout << "请输入姓名：" << endl;
        cin>>name;
        pBooks->personArray[ret].m_Name=name;

        cout << "请输入性别：" << endl;
        cout << "1 ---- 男" << endl;
        cout << "2 ---- 女" << endl;
        int sex = 0;
        while (true){
            cin>>sex;
            if (sex==1 || sex==2) {
                pBooks->personArray[ret].m_Sex=sex;
                break;
            }
            cout << "输入有误，请重新输入!!!" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age=0;
        cin>>age;
        pBooks->personArray[ret].m_Age=age;

        cout << "请输入联系电话：" << endl;
        string phone;
        cin>>phone;
        pBooks->personArray[ret].m_Phone=phone;

        cout << "请输入家庭住址：" << endl;
        string address;
        cin>>address;
        pBooks->personArray[ret].m_Addr=address;

        cout << "修改成功成功！！！" << endl;
    }
}

//6.清空所有联系人
void cleanPerson(AddressBooks *pBooks) {
//    逻辑清空操作
    cout << "是否清空通讯录？" << endl;
    cout << "1-------是" << endl;
    cout << "2-------否" << endl;
    int isClean = 0;
    cin>>isClean;
    if (isClean==1){
        pBooks->m_Size=0;
        cout << "通讯录已清空" << endl;
    }
    cout << "取消清除通讯录" << endl;
}

int main() {
    AddressBooks abs;
    abs.m_Size=0;
    
    int select = 0;
    while (true){
        showMenu();
        cin>>select;
        switch (select) {
            case 1: //添加联系人
                addPerson(&abs);
                break;
            case 2: //显示联系人
                showPerson(&abs);
                break;
            case 3://删除联系人
                deletePerson(&abs);
                break;
            case 4: //查找联系人
                findPerson(&abs);
                break;
            case 5: //修改联系人信息
                modifyPerson(&abs);
                break;
            case 6: // 清空所有联系人
                cleanPerson(&abs);
                break;
            case 0:
                cout << "欢迎下次使用!!!" << endl;
                return 0;
        }
    }

    return 0;
}