#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HocSinh
{
private:
    string Name;
    int Age;
    string HomeTown;
public:
    HocSinh()
    {
        Name = "unknow";
        Age = 0;
        HomeTown = "unknow";
    };
    HocSinh(string Name, int Age, string HomeTown)
    {
        this->Name = Name;
        this->Age = Age;
        this->HomeTown = HomeTown;
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

    string getHomeTown()
    {
        return HomeTown;
    }

    void setHomeTown(string HomeTown)
    {
        this->HomeTown = HomeTown;
    }

    void InPutInformation()
    {
        string buff;
        int Age;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, buff);
        setName(buff);

        cout << "Enter Age: ";
        cin >> Age;
        setAge(Age);

        cout << "Enter HomeTown: ";
        cin.ignore();
        getline(cin, buff);
        setHomeTown(buff);
    }

    void ShowInformation()
    {
        cout << "Name: " << getName() << ", Age: " << getAge() << ", HomeTown: " << getHomeTown() << endl;
    }
};

int main()
{
    vector <HocSinh> ListHocSinh;
    HocSinh hocSinh;
    int Choise = 0;
    int age = 0;
    int count = 0;
    string home;
    while (true)
    {
        system("cls");
        cout << "**************CHUONG TRINH QUAN LY HOC SINH****************\n";
        cout << "**   1. Them moi hoc sinh                                **\n";
        cout << "**   2. In danh sach hoc sinh                            **\n";
        cout << "**   3. Hien thi hoc sinh theo tuoi                      **\n";
        cout << "**   4. Dem so luong hoc sinh co tuoi (X) que o (Y)      **\n";
        cout << "**   0. Thoat chuong trinh                               **\n";
        cout << "***********************************************************\n";
        cout << "Nhap lua chon: ";
        cin >> Choise;
        switch (Choise)
        {
        case 1:
            cout << "Them hoc sinh moi:\n";
            hocSinh.InPutInformation();
            ListHocSinh.push_back(hocSinh);
            system("pause");
            break;
        case 2:
            cout << "Danh sach hoc sinh:\n";
            for (size_t i = 0; i < ListHocSinh.size(); ++i)
            {
                ListHocSinh.at(i).ShowInformation();
            }
            system("pause");
            break;
        case 3:
            cout << "Nhap tuoi de tim kiem: ";
            cin >> age;
            for (size_t i = 0; i < ListHocSinh.size(); ++i)
            {
                if (age == ListHocSinh.at(i).getAge())
                {
                    ListHocSinh.at(i).ShowInformation();
                }
            }
            system("pause");
            break;
        case 4:
            cout << "Nhap tuoi: ";
            cin >> age;
            cout << "Nhap tinh: ";
            cin.ignore();
            getline(cin, home);
            for (size_t i = 0; i < ListHocSinh.size(); ++i)
            {
                if (age == ListHocSinh.at(i).getAge() && home == ListHocSinh.at(i).getHomeTown())
                {
                    count++;
                }
            }
            cout << "So HS co tuoi " << age << "que o " << home << "la: " << count << endl;
            system("pause");
            break;
        case 0:
            cout << "Ban chon thoat chuong trinh!\n";
            system("pause");
            return 0;
        default:
            cout << "Khong co lua chon nay!\n";
            system("pause");
            break;
        }
    }
}