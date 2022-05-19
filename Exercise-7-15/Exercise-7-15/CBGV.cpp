#include "CBGV.h"

void CBGV::addCBGV()
{
    Nguoi CB;
    CB.InputInformation();
    ListCBGV.push_back(CB);
}

void CBGV::deleteCBGV()
{
    string code;
    cout << "Nhap ma GV de xoa: ";
    cin.ignore();
    getline(cin, code);
    for (size_t i = 0; i < ListCBGV.size(); ++i)
    {
        if (code == ListCBGV.at(i).getID())
        {
            ListCBGV.erase(ListCBGV.begin() + i);
        }
    }
}

void CBGV::showCBGV()
{
    for (size_t i = 0; i < ListCBGV.size(); ++i)
    {
        ListCBGV.at(i).ShowInformation();
    }
}

void CBGV::salaryCBGV()
{
    string code;
    cout << "Nhap ma GV can tinh luong: ";
    cin.ignore();
    getline(cin, code);
    for (size_t i = 0; i < ListCBGV.size(); ++i)
    {
        if (code == ListCBGV.at(i).getID())
        {
            ListCBGV.at(i).setRealSalary(ListCBGV.at(i).getSalary() + ListCBGV.at(i).getBonus() - ListCBGV.at(i).getPenalty());
            ListCBGV.at(i).ShowInformation();
        }
    }
}