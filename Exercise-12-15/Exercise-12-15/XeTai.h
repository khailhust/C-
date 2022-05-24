#pragma once
#include "PhuongTien.h"

class XeTai :
    public PhuongTien
{
private:
    double payLoad;
public:
    XeTai();
    XeTai(string ID, string Brand, int makeYear, double Price, string Color, double payLoad);

    double getPayLoad();
    void setPayLoad(double payLoad);

    void Input();
    void Show();
};

