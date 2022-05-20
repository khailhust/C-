#include "SinhVien.h"

SinhVien::SinhVien()
{
    Name = "unknow";
    Age = 0;
    className = "unknow";
}

SinhVien::SinhVien(string Name, int Age, string className)
{
    this->Name = Name;
    this->Age = Age;
    this->className = className;
}

string SinhVien::getName()
{
    return Name;
}

int SinhVien::getAge()
{
    return Age;
}

string SinhVien::getClassName()
{
    return className;
}

void SinhVien::setName(string Name)
{
    this->Name = Name;
}

void SinhVien::setAge(int Age)
{
    this->Age = Age;
}

void SinhVien::setClassName(string className)
{
    this->className = className;
}

void SinhVien::InputSV()
{
    cout << "Enter Name Student: ";
    getline(cin, this->Name);

    cout << "Enter Age: ";
    cin >> this->Age;

    cout << "Enter Class Name: ";
    cin.ignore();
    getline(cin, this->className);
}

void SinhVien::ShowSV()
{
    cout << ", Name Student: " << getName() << ", Age: " << getAge() << ", Class Name: " << getClassName() << endl;
}
