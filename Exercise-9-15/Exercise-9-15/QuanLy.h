#pragma once
#include <vector>
#include "BienLai.h"

class QuanLy
{
private:
    vector <BienLai> ListBills;
public:
    void addBill();
    void showList();
    void deleteBill();
    void modifyBill();
};

