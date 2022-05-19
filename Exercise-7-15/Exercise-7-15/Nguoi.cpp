#include "Nguoi.h"

Nguoi::Nguoi()
{
    Name = "unknow";
    Age = 0;
    HomeTown = "unknow";
    ID = "";
    Salary = 0;
    Bonus = 0;
    Penalty = 0;
    realSalary = 0;
}

Nguoi::Nguoi(string Name, int Age, string HomeTown, string ID, double Salary, double Bonus, double Penalty, double realSalary)
{
    this->Name = Name;
    this->Age = Age;
    this->HomeTown = HomeTown;
    this->ID = ID;
    this->Salary = Salary;
    this->Bonus = Bonus;
    this->Penalty = Penalty;
    this->realSalary = realSalary;
}

string Nguoi::getName()
{
    return Name;
}

int Nguoi::getAge()
{
    return Age;
}

string Nguoi::getHomeTown()
{
    return HomeTown;
}

string Nguoi::getID()
{
    return ID;
}

double Nguoi::getSalary()
{
    return Salary;
}

double Nguoi::getBonus()
{
    return Bonus;
}

double Nguoi::getPenalty()
{
    return Penalty;
}

double Nguoi::getRealSalary()
{
    return realSalary;
}

void Nguoi::setName(string Name)
{
    this->Name = Name;
}

void Nguoi::setAge(int Age)
{
    this->Age = Age;
}

void Nguoi::setID(string ID)
{
    this->ID = ID;
}

void Nguoi::setHomeTown(string HomeTown)
{
    this->HomeTown = HomeTown;
}

void Nguoi::setSalary(double Salary)
{
    this->Salary = Salary;
}

void Nguoi::setBonus(double Bonus)
{
    this->Bonus = Bonus;
}

void Nguoi::setPenalty(double Penalty)
{
    this->Penalty = Penalty;
}

void Nguoi::setRealSalary(double realSalary)
{
    this->realSalary = realSalary;
}

void Nguoi::InputInformation()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, this->Name);

    cout << "Enter Age:";
    cin >> this->Age;

    cout << "Enter HomeTown: ";
    cin.ignore();
    getline(cin, this->HomeTown);

    cout << "Enter ID: ";
    //cin.ignore();
    getline(cin, this->ID);

    cout << "Enter Salary: ";
    cin >> this->Salary;

    cout << "Enter Bonus: ";
    cin >> this->Bonus;

    cout << "Enter Penalty: ";
    cin >> this->Penalty;

}

void Nguoi::ShowInformation()
{
    cout << "Name: " << getName() << ", Age: " << getAge() << ", ID: " << getID() << ", HomeTown: " << getHomeTown();
    cout << ", Salary: " << getSalary() << ", Bonus: " << getBonus() << ", Penalty: " << getPenalty() << ", Real Salary: " << getRealSalary() << endl;
}