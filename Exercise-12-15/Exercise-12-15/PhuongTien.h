#pragma once
#include <iostream>
#include <string>
using namespace std;

class PhuongTien
{
private:
    string ID;
    string Brand;
    int makeYear;
    double Price;
    string Color;
public:
    PhuongTien();
    PhuongTien(string ID, string Brand, int makeYear, double Price, string Color);

    string getID();
    string getBrand();
    int getMakeYear();
    double getPrice();
    string getColor();

    void setID(string ID);
    void setBrand(string Brand);
    void setMakeYear(int makeYear);
    void setPrice(double Price);
    void setColor(string Color);

    virtual void Input();
    virtual void Show();
};

