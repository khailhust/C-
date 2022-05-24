#include "XeTai.h"

XeTai::XeTai()
{
    payLoad = 0.0;
}

XeTai::XeTai(string ID, string Brand, int makeYear, double Price, string Color, double payLoad) : PhuongTien(ID, Brand, makeYear, Price, Color)
{
    this->payLoad = payLoad;
}

double XeTai::getPayLoad()
{
    return payLoad;
}

void XeTai::setPayLoad(double payLoad)
{
    this->payLoad = payLoad;
}

void XeTai::Input()
{
    PhuongTien::Input();

    cout << "Enter PayLoad: ";
    cin >> this->payLoad;
}

void XeTai::Show()
{
    PhuongTien::Show();

    cout << ", PayLoad: " << getPayLoad() << endl;
}
