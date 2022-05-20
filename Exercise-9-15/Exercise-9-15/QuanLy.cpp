#include "QuanLy.h"

void QuanLy::addBill()
{
    BienLai Bill;
    Bill.InputBill();
    ListBills.push_back(Bill);
}

void QuanLy::showList()
{
    for (size_t i = 0; i < ListBills.size(); ++i)
    {
        ListBills.at(i).ShowBill();
    }
}

void QuanLy::deleteBill()
{
    string ecode;
    cout << "Nhap ma cong to de xoa:";
    cin.ignore();
    getline(cin, ecode);

    for (size_t i = 0; i < ListBills.size(); ++i)
    {
        if (ecode == ListBills.at(i).getClient().getEMeterCode())
        {
            ListBills.erase(ListBills.begin() + i);
        }
    }
}

void QuanLy::modifyBill()
{
}
