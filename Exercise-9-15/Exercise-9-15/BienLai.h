#pragma once
#include <iostream>
#include "KhachHang.h"
using namespace std;

class BienLai
{
private:
    KhachHang Client;
    double oldMeter;
    double newMeter;
    double Bill;
public:
    BienLai();
    BienLai(KhachHang Client, double oldMeter, double newMeter);

    KhachHang getClient();
    double getOldMeter();
    double getNewMeter();
    double getBill();

    void setClient(KhachHang Client);
    void setOldMeter(double odlMeter);
    void setNewMeter(double newMeter);
    void calcBill();

    void InputBill();
    void ShowBill();
};

