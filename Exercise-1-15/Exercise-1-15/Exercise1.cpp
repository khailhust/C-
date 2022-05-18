#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CanBo
{
private:
    string Name;
    int Age;
    string Gender;
    string Address;
public:
    CanBo()
    {
        Name = "unknow";
        Age = 0;
        Gender = "unknow";
        Address = "unknow";
    };
    CanBo(string Name, int Age, string Gender, string Address)
    {
        this->Name = Name;
        this->Age = Age;
        this->Gender = Gender;
        this->Address = Address;
    }

    string getName()
    {
        return Name;
    }

    void setName(string Name)
    {
        this->Name = Name;
    }

    int getAge()
    {
        return Age;
    }

    void setAge(int Age)
    {
        this->Age = Age;
    }

    string getGender()
    {
        return Gender;
    }

    void setGender(string Gender)
    {
        this->Gender = Gender;
    }

    string getAddress()
    {
        return Address;
    }

    void setAddress(string Address)
    {
        this->Address = Address;
    }

    virtual void Input()
    {
        cout << "Name: ";
        string Name;
        cin.ignore();
        getline(cin, Name);
        setName(Name);
        cout << "Age: ";
        int Age;
        cin >> Age;
        setAge(Age);
        cout << "Gender: ";
        string Gender;
        cin.ignore();
        getline(cin, Gender);
        setGender(Gender);
        cout << "Address: ";
        string Address;
        cin.ignore();
        getline(cin, Address);
        setAddress(Address);
    }

    virtual void Print()
    {
        cout << "Name: " << getName() << ",Age: " << getAge() << ",Gender: " << getGender() << ",Address: " << getAddress();
    }
};

class CongNhan : public CanBo
{
private:
    int Level;
public:
    CongNhan()
    {
        this->Level = 0;
    }
    CongNhan(string Name, int Age, string Gender, string Address, int Level) : CanBo(Name, Age, Gender, Address)
    {
        this->Level = Level;
    }

    int getLevel()
    {
        return Level;
    }

    void setLevel(int Level)
    {
        this->Level = Level;
    }

    void Input()
    {
        CanBo::Input();
        cout << "Level: ";
        int Level;
        cin >> Level;
        setLevel(Level);
    }

    void Print()
    {
        CanBo::Print();
        cout << ",Level: " << getLevel() << endl;
    }
};

class KySu : public CanBo
{
private:
    string Major;
public:
    KySu()
    {
        this->Major = "unknow";
    }

    KySu(string Name, int Age, string Gender, string Address, string Major) : CanBo(Name, Age, Gender, Address)
    {
        this->Major = Major;
    }

    string getMajor()
    {
        return Major;
    }

    void setMajor(string Major)
    {
        this->Major = Major;
    }

    void Input()
    {
        CanBo::Input();
        cout << "Major: ";
        string Major;
        getline(cin, Major);
        setMajor(Major);
    }

    void Print()
    {
        CanBo::Print();
        cout << ",Major: " << getMajor() << endl;
    }
};

class NhanVien : public CanBo
{
private:
    string Task;
public:
    NhanVien()
    {
        this->Task = "unknow";
    }

    NhanVien(string Name, int Age, string Gender, string Address, string Task) : CanBo(Name, Age, Gender, Address)
    {
        this->Task = Task;
    }

    string getTask()
    {
        return Task;
    }

    void setTask(string Task)
    {
        this->Task = Task;
    }

    void Input()
    {
        CanBo::Input();
        cout << "Task: ";
        string Task;
        getline(cin, Task);
        setTask(Task);
    }

    void Print()
    {
        CanBo::Print();
        cout << ",Task: " << getTask() << endl;
    }
};


class QLCB
{
private:
    vector <CanBo*> listCanBo;
public:
    void addCanBo()
    {
        CanBo* canBo = nullptr;
        int choise = 0;
        cout << "1.Them Cong nhan" << endl;
        cout << "2.Them Ky Su" << endl;
        cout << "3.Them Nhan Vien" << endl;
        cout << "Nhap lua chon(1,2,3): ";
        cin >> choise;
        switch (choise)
        {
        case 1:
            canBo = new CongNhan;
            break;
        case 2:
            canBo = new KySu;
            break;
        case 3:
            canBo = new NhanVien;
            break;
        default:
            cout << "Khong co lua chon nay!";
            break;
        }
        canBo->Input();
        listCanBo.push_back(canBo);
    }

    void searchCanBo()
    {
        cout << "Nhap ten can tim: ";
        string Name;
        cin.ignore();
        getline(cin, Name);
        for (size_t i = 0; i < listCanBo.size(); ++i)
        {
            if (Name == listCanBo.at(i)->getName())
            {
                listCanBo.at(i)->Print();
            }
        }
    }

    void printList()
    {
        for (size_t i = 0; i < listCanBo.size(); ++i)
        {
            listCanBo.at(i)->Print();
        }
    }

    void Exit()
    {
        exit(0);
    }
};

int main()
{
    QLCB Qlcb;
    int Choise = 0;
    while (true)
    {
        system("cls");
        cout << "1.Them moi can bo" << endl;
        cout << "2.Tim kiem theo ho ten" << endl;
        cout << "3.Hien thi thong tin ve danh sach cac can bo" << endl;
        cout << "0.Thoat chuong trinh" << endl;
        cout << "Nhap lua chon: ";
        cin >> Choise;
        switch (Choise)
        {
        case 1:
            cout << "Ban da chon them can bo!\n";
            Qlcb.addCanBo();
            system("pause");
            break;
        case 2:
            cout << "Tim kiem thong tin canbo:\n";
            Qlcb.searchCanBo();
            system("pause");
            break;
        case 3:
            cout << "Thong tin ve danh sach cac can bo:\n";
            Qlcb.printList();
            system("pause");
            break;
        case 0:
            cout << "Ban chon Thoat!";
            Qlcb.Exit();
            system("pause");
            break;
        default:
            cout << "Khong co lua chon nay!";
            system("pause");
            break;
        }
    }


}