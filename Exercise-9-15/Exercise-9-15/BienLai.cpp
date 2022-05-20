#include "BienLai.h"

BienLai::BienLai()
{
    oldMeter = 0;
    newMeter = 0;
    Bill = 0;
}

BienLai::BienLai(KhachHang Client, double oldMeter, double newMeter)
{
    this->Client = Client;
    this->oldMeter = oldMeter;
    this->newMeter = newMeter;
}

KhachHang BienLai::getClient()
{
    return Client;
}

double BienLai::getOldMeter()
{
    return oldMeter;
}

double BienLai::getNewMeter()
{
    return newMeter;
}

double BienLai::getBill()
{
    return Bill;
}

void BienLai::setClient(KhachHang Client)
{
    this->Client = Client;
}

void BienLai::setOldMeter(double odlMeter)
{
    this->oldMeter = oldMeter;
}

void BienLai::setNewMeter(double newMeter)
{
    this->newMeter = newMeter;
}

void BienLai::calcBill()
{
    this->Bill = (newMeter - oldMeter) * 5;
}

void BienLai::InputBill()
{
    Client.InputInforClient();

    cout << "Enter Old Meter: ";
    cin >> this->oldMeter;

    cout << "Enter New Meter: ";
    cin >> this->newMeter;

    calcBill();
}

void BienLai::ShowBill()
{
    Client.ShowInforClient();
    cout << ", Old Meter: " << getOldMeter() << ", New Meter: " << getNewMeter() << ", Bill: " << getBill() << endl;
}
