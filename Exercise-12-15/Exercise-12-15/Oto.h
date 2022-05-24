#pragma once
#include "PhuongTien.h"

class Oto :
    public PhuongTien
{
private:
    int numberSeat;
    string engineType;
public:
    Oto();
    Oto(string ID, string Brand, int makeYear, double Price, string Color, int numberSeat, string engineType);

    int getNumberSeat();
    string getEngineType();

    void setNumberSeat(int numberSeat);
    void setEngineType(string engineType);

    void Input();
    void Show();
};

