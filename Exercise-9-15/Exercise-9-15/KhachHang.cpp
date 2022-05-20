#include "KhachHang.h"

KhachHang::KhachHang()
{
    Name = "unknow";
    numberHouse = 0;
    emeterCode = "unknow";
}

KhachHang::KhachHang(string Name, int numberHouse, string emeterCode)
{
    this->Name = Name;
    this->numberHouse = numberHouse;
    this->emeterCode = emeterCode;
}

string KhachHang::getName()
{
    return Name;
}

int KhachHang::getNumberHouse()
{
    return numberHouse;
}

string KhachHang::getEMeterCode()
{
    return emeterCode;
}

void KhachHang::setName(string Name)
{
    this->Name = Name;
}

void KhachHang::setNumberHouse(int numberHouse)
{
    this->numberHouse = numberHouse;
}

void KhachHang::setEMeterCode(string emeterCode)
{
    this->emeterCode = emeterCode;
}

void KhachHang::InputInforClient()
{
    cout << "Enter name of client: ";
    cin.ignore();
    getline(cin, this->Name);

    cout << "Enter house number: ";
    cin >> this->numberHouse;

    cout << "Enter E meter code: ";
    cin.ignore();
    getline(cin, this->emeterCode);
}

void KhachHang::ShowInforClient()
{
    cout << "Name Client: " << getName() << ", House number: " << getNumberHouse() << ", EMeter Code: " << getEMeterCode();
}
