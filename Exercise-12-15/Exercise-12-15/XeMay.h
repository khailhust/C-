#pragma once
#include "PhuongTien.h"

class XeMay :
    public PhuongTien
{
private:
    double Power;
public:
    XeMay();
    XeMay(string ID, string Brand, int makeYear, double Price, string Color, double Power);

    double getPower();
    void setPower(double Power);

    void Input();
    void Show();
};

