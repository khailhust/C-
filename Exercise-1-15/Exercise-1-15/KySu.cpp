/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "KySu.h"

/*******************************************************************************
 * Function Definition
 ******************************************************************************/

KySu::KySu()
{
    Major = "unknow";
}

KySu::KySu(string Name, int Age, string Gender, string Address, string Major) : CanBo(Name, Age, Gender, Address)
{
    this->Major = Major;
}

string KySu::getMajor()
{
    return Major;
}

void KySu::setMajor(string Major)
{
    this->Major = Major;
}

void KySu::Input()
{
    CanBo::Input();
    cout << "Enter Major: ";
    getline(cin, this->Major);
}

void KySu::Print()
{
    CanBo::Print();
    cout << ", Major: " << getMajor() << endl;
}
/*******************************************************************************
 * End of file
 ******************************************************************************/