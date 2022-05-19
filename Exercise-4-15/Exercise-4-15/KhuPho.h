#pragma once
#include <iostream>
#include <vector>
#include "HoGiaDinh.h"

class KhuPho
{
private:
    vector <HoGiaDinh> DSHoGiaDinh;
public:
    void addHo();
    void show();
};

