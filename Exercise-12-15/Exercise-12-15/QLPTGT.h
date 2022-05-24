#pragma once
#include <vector>
#include "PhuongTien.h"
#include "Oto.h"
#include "XeMay.h"
#include "XeTai.h"

class QLPTGT
{
private:
    vector <PhuongTien*> DSPhuongTien;
public:
    void addVehicle();

    bool deleteVehicle();

    void printList();

    bool searchVehicle();

    void ExitProgram();
};

