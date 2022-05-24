#include "PhuongTien.h"

PhuongTien::PhuongTien()
{
    ID = "unknow";
    Brand = "unknow";
    makeYear = 0;
    Price = 0.0;
    Color = "unknow";
}

PhuongTien::PhuongTien(string ID, string Brand, int makeYear, double Price, string Color)
{
    this->ID = ID;
    this->Brand = Brand;
    this->makeYear = makeYear;
    this->Price = Price;
    this->Color = Color;
}

string PhuongTien::getID()
{
    return ID;
}

string PhuongTien::getBrand()
{
    return Brand;
}

int PhuongTien::getMakeYear()
{
    return makeYear;
}

double PhuongTien::getPrice()
{
    return Price;
}

string PhuongTien::getColor()
{
    return Color;
}

void PhuongTien::setID(string ID)
{
    this->ID = ID;
}

void PhuongTien::setBrand(string Brand)
{
    this->Brand = Brand;
}

void PhuongTien::setMakeYear(int makeYear)
{
    this->makeYear = makeYear;
}

void PhuongTien::setPrice(double Price)
{
    this->Price = Price;
}

void PhuongTien::setColor(string Color)
{
    this->Color = Color;
}

void PhuongTien::Input()
{
    cout << "Enter ID: ";
    cin.ignore();
    getline(cin, this->ID);

    cout << "Enter Brand: ";
    getline(cin, this->Brand);

    cout << "Enter make year: ";
    cin >> this->makeYear;

    cout << "Enter Price: ";
    cin >> this->Price;

    cout << "Enter Color: ";
    cin.ignore();
    getline(cin, this->Color);
}

void PhuongTien::Show()
{
    cout << "ID: " << getID() << ", Brand: " << getBrand() << ", Make Year: " << getMakeYear();
    cout << ", Price: " << getPrice() << ", Color: " << getColor();
}
