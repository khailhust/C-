#include "Oto.h"

Oto::Oto()
{
    numberSeat = 0;
    engineType = "unknow";
}

Oto::Oto(string ID, string Brand, int makeYear, double Price, string Color, int numberSeat, string engineType) : PhuongTien(ID, Brand, makeYear, Price, Color)
{
    this->numberSeat = numberSeat;
    this->engineType = engineType;
}

int Oto::getNumberSeat()
{
    return numberSeat;
}

string Oto::getEngineType()
{
    return engineType;
}

void Oto::setNumberSeat(int numberSeat)
{
    this->numberSeat = numberSeat;
}

void Oto::setEngineType(string engineType)
{
    this->engineType = engineType;
}

void Oto::Input()
{
    PhuongTien::Input();

    cout << "Enter number of Seat: ";
    cin >> this->numberSeat;

    cout << "Enter engine type: ";
    cin.ignore();
    getline(cin, this->engineType);
}

void Oto::Show()
{
    PhuongTien::Show();

    cout << ", Number Seat: " << getNumberSeat() << ", Engine Type: " << getEngineType() << endl;
}
