#pragma once
#include <iostream>
#include "SinhVien.h"
using namespace std;

class TheMuon
{
private:
    string IDCard;
    int borrowDate;
    int payDate;
    string IDBook;
    SinhVien Student;
public:
    TheMuon();
    TheMuon(string, int, int, string, SinhVien);

    string getIDCard();
    int getBorrowDate();
    int getPayDate();
    string getIDBook();
    SinhVien getStudent();

    void setIDCard(string);
    void setBorrowDate(int);
    void setPayDate(int);
    void setIDBook(string);
    void setStudent(SinhVien);

    void InputCard();
    void ShowCard();
};

