#include "XeMay.h"

XeMay::XeMay()
{
    Power = 0.0;
}

XeMay::XeMay(string ID, string Brand, int makeYear, double Price, string Color, double Power) : PhuongTien(ID, Brand, makeYear, Price, Color)
{
    this->Power = Power;
}

double XeMay::getPower()
{
    return Power;
}

void XeMay::setPower(double Power)
{
    this->Power = Power;
}

void XeMay::Input()
{
    PhuongTien::Input();

    cout << "Enter power: ";
    cin >> this->Power;
}

void XeMay::Show()
{
    PhuongTien::Show();

    cout << ", Power: " << getPower() << endl;
}
