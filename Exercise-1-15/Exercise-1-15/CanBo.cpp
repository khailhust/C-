/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "CanBo.h"

/*******************************************************************************
 * Function Definition
 ******************************************************************************/

CanBo::CanBo()
{
    Name = "unknow";
    Age = 0;
    Gender = "unknow";
    Address = "unknow";
}

CanBo::CanBo(string Name, int Age, string Gender, string Address)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->Address = Address;
}

string CanBo::getName()
{
    return Name;
}

void CanBo::setName(string Name)
{
    this->Name = Name;
}

int CanBo::getAge()
{
    return Age;
}

void CanBo::setAge(int Age)
{
    this->Age = Age;
}

string CanBo::getGender()
{
    return Gender;
}

void CanBo::setGender(string Gender)
{
    this->Gender = Gender;
}

string CanBo::getAddress()
{
    return Address;
}

void CanBo::setAddress(string Address)
{
    this->Address = Address;
}

void CanBo::Input()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, this->Name);

    cout << "Enter Age: ";
    cin >> this->Age;

    cout << "Enter Gender: ";
    cin.ignore();
    getline(cin, this->Gender);

    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, this->Address);
}

void CanBo::Print()
{
    cout << "Name: " << getName() << ", Age: " << getAge() << ", Gender: " << getGender() << ", Address: " << getAddress();
}
/*******************************************************************************
 * End of file
 ******************************************************************************/