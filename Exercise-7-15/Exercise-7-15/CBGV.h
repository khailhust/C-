#pragma once
#include <iostream>
#include <vector>
#include "Nguoi.h"
using namespace std;

class CBGV
{
private:
    vector <Nguoi> ListCBGV;
public:
    void addCBGV();
    void deleteCBGV();
    void showCBGV();
    void salaryCBGV();
};

