#include "QLPTGT.h"

void QLPTGT::addVehicle()
{
    PhuongTien* Vehicle = nullptr;
    char choice = 0;
    do
    {
        system("cls");
        cout << "Them Phuong Tien" << endl;
        cout << "---------------------------------------------\n";
        cout << "1.Them Oto" << endl;
        cout << "2.Them Xe May" << endl;
        cout << "3.Them Xe Tai" << endl;
        cout << "0.Quay lai" << endl;
        cout << "---------------------------------------------\n";
        cout << "Nhap lua chon(0,1,2,3): ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            Vehicle = new Oto;
            break;
        case '2':
            Vehicle = new XeMay;
            break;
        case '3':
            Vehicle = new XeTai;
            break;
        case '0':
            return;
        default:
            cout << "Khong co lua chon nay!\n";
            system("pause");
            break;
        }
    } while (choice < '0' || choice > '3');

    if (nullptr != Vehicle)
    {
        Vehicle->Input();
        DSPhuongTien.push_back(Vehicle);
    }
}

bool QLPTGT::deleteVehicle()
{
    bool check = false;
    string ID;

    cout << "Nhap ID de xoa: ";
    cin.ignore();
    getline(cin, ID);
    for (size_t i = 0; i < DSPhuongTien.size(); ++i)
    {
        if (ID == DSPhuongTien.at(i)->getID())
        {
            DSPhuongTien.erase(DSPhuongTien.begin() + i);
            check = true;
        }
    }

    return check;
}

void QLPTGT::printList()
{
    int size = DSPhuongTien.size();

    if (0 != size)
    {
        for (int i = 0; i < size; ++i)
        {
            DSPhuongTien.at(i)->Show();
        }
    }
    else
    {
        cout << "Danh sach trong!\n";
    }
}

bool QLPTGT::searchVehicle()
{
    bool isFinded = false;
    string brand;
    string color;

    cout << "Nhap ten hang: ";
    cin.ignore();
    getline(cin, brand);
    cout << "Nhap mau: ";
    getline(cin, color);

    for (size_t i = 0; i < DSPhuongTien.size(); ++i)
    {
        if (brand == DSPhuongTien.at(i)->getBrand() && color == DSPhuongTien.at(i)->getColor())
        {
            DSPhuongTien.at(i)->Show();
            isFinded = true;
        }
    }

    return isFinded;
}

void QLPTGT::ExitProgram()
{
    exit(0);
}
