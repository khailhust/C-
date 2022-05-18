#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define PRICE_A 500
#define PRICE_B 300
#define PRICE_C 100

class Nguoi
{
private:
    string Name;
    int Age;
    int ID;
    char typeRoom;
    int numberDaysRent;
public:
    Nguoi()
    {
        Name = "unknow";
        Age = 0;
        ID = 0;
        typeRoom = '0';
        numberDaysRent = 0;
    }
    Nguoi(string Name, int Age, int ID, char typeRoom, int numberDaysRent)
    {
        this->Name = Name;
        this->Age = Age;
        this->ID = ID;
        this->typeRoom = typeRoom;
        this->numberDaysRent = numberDaysRent;
    }

    void setName(string Name)
    {
        this->Name = Name;
    }

    string getName()
    {
        return Name;
    }

    void setAge(int Age)
    {
        this->Age = Age;
    }

    int getAge()
    {
        return Age;
    }

    void setID(int ID)
    {
        this->ID = ID;
    }

    int getID()
    {
        return ID;
    }

    void setTypeRoom(char typeRoom)
    {
        this->typeRoom = typeRoom;
    }

    char getTypeRoom()
    {
        return typeRoom;
    }

    void setNumberDaysRent(int numberDaysRent)
    {
        this->numberDaysRent = numberDaysRent;
    }

    int getNumberDaysRent()
    {
        return numberDaysRent;
    }

    void Input()
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
        cout << "ID: ";
        int ID;
        cin >> ID;
        setID(ID);
        cout << "Type of Room: ";
        char typeRoom;
        cin >> typeRoom;
        setTypeRoom(typeRoom);
        cout << "Number of Rental Days: ";
        int numberDaysRent;
        cin >> numberDaysRent;
        setNumberDaysRent(numberDaysRent);
    }

    void Print()
    {
        cout << "Name: " << getName() << ", Age: " << getAge() << ", ID: " << getID() << ", Type of Room: " << getTypeRoom() << ", Number of Rental Days: " << getNumberDaysRent() << endl;
    }
};

class KhachSan
{
private:
    vector <Nguoi> DSKhach;
public:
    void addKhach()
    {
        Nguoi Khach;
        Khach.Input();
        DSKhach.push_back(Khach);
    }

    void printDSKhach()
    {
        for (size_t i = 0; i < DSKhach.size(); ++i)
        {
            DSKhach.at(i).Print();
        }
    }

    void deleteKhach()
    {
        cout << "Nhap ID khach hang de xoa: ";
        int ID;
        cin >> ID;
        for (size_t i = 0; i < DSKhach.size(); ++i)
        {
            if (ID == DSKhach.at(i).getID())
            {
                DSKhach.erase(DSKhach.begin() + i);
            }
        }
    }

    void calculateCash()
    {
        int Cash = 0;
        cout << "Nhap ID khach hang de tinh tien: ";
        int ID;
        cin >> ID;
        for (size_t i = 0; i < DSKhach.size(); ++i)
        {
            if (ID == DSKhach.at(i).getID())
            {
                if (DSKhach.at(i).getTypeRoom() == 'A')
                {
                    Cash = DSKhach.at(i).getNumberDaysRent() * PRICE_A;
                }
                else if (DSKhach.at(i).getTypeRoom() == 'B')
                {
                    Cash = DSKhach.at(i).getNumberDaysRent() * PRICE_B;
                }
                else if (DSKhach.at(i).getTypeRoom() == 'C')
                {
                    Cash = DSKhach.at(i).getNumberDaysRent() * PRICE_C;
                }
            }
        }
        cout << "Tien Phong: " << Cash << endl;
    }
};
int main()
{
    int Choise = 0;
    KhachSan QLKhachSan;
    while (true)
    {
        system("cls");
        cout << "1.Them khach moi\n";
        cout << "2.In danh sach khach hang\n";
        cout << "3.Xoa khach\n";
        cout << "4.Tinh tien\n";
        cout << "0.Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> Choise;
        switch (Choise)
        {
        case 1:
            cout << "Ban chon them khach hang moi.\n";
            QLKhachSan.addKhach();
            system("pause");
            break;
        case 2:
            cout << "Danh sach khach hang:\n";
            QLKhachSan.printDSKhach();
            system("pause");
            break;
        case 3:
            QLKhachSan.deleteKhach();
            system("pause");
            break;
        case 4:
            QLKhachSan.calculateCash();
            system("pause");
            break;
        case 0:
            cout << "Ban chon thoat!";
            system("pause");
            return 0;
        default:
            cout << "Khong co lua chon nay!";
            system("pause");
            break;
        }
    }

}