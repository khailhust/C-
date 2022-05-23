#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
    double PhanThuc;
    double PhanAo;
public:
    SoPhuc();
    SoPhuc(double PhanThuc, double PhanAo);

    double getPhanThuc();
    double getPhanAo();

    void setPhanThuc(double PhanThuc);
    void setPhanAo(double PhanAo);

    void InPut();
    void Show();

    SoPhuc operator+(SoPhuc z);
    SoPhuc operator*(SoPhuc z);
};

