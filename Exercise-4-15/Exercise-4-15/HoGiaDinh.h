#pragma once
#include <iostream>
#include <vector>
#include "Nguoi.h"
using namespace std;

class HoGiaDinh
{
private:
    vector <Nguoi> DSThanhVien;
    int numberHouse;
public:
    int getNumberMember();
    void addMember(Nguoi Member);
    int getNumberHouse();
    void setNumberHouse(int);
};

