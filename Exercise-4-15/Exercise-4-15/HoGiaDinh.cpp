#include "HoGiaDinh.h"

int HoGiaDinh::getNumberMember()
{
    return DSThanhVien.size();
}

void HoGiaDinh::addMember(Nguoi Member)
{
    DSThanhVien.push_back(Member);
}

int HoGiaDinh::getNumberHouse()
{
    return numberHouse;
}

void HoGiaDinh::setNumberHouse(int numberHouse)
{
    this->numberHouse = numberHouse;
}
