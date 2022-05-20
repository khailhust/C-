#pragma once
#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
private:
    string Name;
    int Age;
    string className;
public:
    SinhVien();
    SinhVien(string, int, string);

    string getName();
    int getAge();
    string getClassName();

    void setName(string);
    void setAge(int);
    void setClassName(string);

    void InputSV();
    void ShowSV();
};

