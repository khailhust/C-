#pragma once
#include <iostream>
#include <vector>
#include "TheMuon.h"
using namespace std;

class ThuVien
{
private:
    vector <TheMuon> ListCard;
public:
    void addCard();
    void deleteCard();
    void showInfor();
};

