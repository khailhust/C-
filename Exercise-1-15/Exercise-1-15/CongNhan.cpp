/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "CongNhan.h"

/*******************************************************************************
 * Function Definition
 ******************************************************************************/

CongNhan::CongNhan()
{
    this->Level = 0;
}

CongNhan::CongNhan(string Name, int Age, string Gender, string Address, int Level) : CanBo(Name, Age, Gender, Address)
{
    this->Level = Level;
}

int CongNhan::getLevel()
{
    return Level;
}

void CongNhan::setLevel(int Level)
{
    this->Level = Level;
}

void CongNhan::Input()
{
    CanBo::Input();
    cout << "Enter Level: ";
    cin >> this->Level;
}

void CongNhan::Print()
{
    CanBo::Print();
    cout << ", Level: " << getLevel() << endl;
}
/*******************************************************************************
 * End of file
 ******************************************************************************/