#pragma once
#include <iostream>
#include <string>
using namespace std;

class KhachHang
{
private:
    string Name;
    int numberHouse;
    string emeterCode;
public:
    KhachHang();
    KhachHang(string, int, string);

    string getName();
    int getNumberHouse();
    string getEMeterCode();

    void setName(string Name);
    void setNumberHouse(int numberHouse);
    void setEMeterCode(string emeterCode);

    void InputInforClient();
    void ShowInforClient();

};

