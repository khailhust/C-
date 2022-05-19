#include "Nguoi.h"

Nguoi::Nguoi()
{
    Name = "unknow";
    Age = 0;
    Job = "unknow";
    ID = 0;
}

Nguoi::Nguoi(string Name, int Age, string Job, int ID)
{
    this->Name = Name;
    this->Age = Age;
    this->Job = Job;
    this->ID = ID;
}

string Nguoi::getName()
{
    return Name;
}

int Nguoi::getAge()
{
    return Age;
}

string Nguoi::getJob()
{
    return Job;
}

int Nguoi::getID()
{
    return ID;
}

void Nguoi::setName(string Name)
{
    this->Name = Name;
}

void Nguoi::setAge(int Age)
{
    this->Age = Age;
}

void Nguoi::setJob(string Job)
{
    this->Job = Job;
}

void Nguoi::setID(int ID)
{
    this->ID = ID;
}

void Nguoi::InputInformation()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, this->Name);

    cout << "Enter Age: ";
    cin >> this->Age;

    cout << "Enter Job: ";
    cin.ignore();
    getline(cin, this->Job);

    cout << "Enter ID: ";
    cin >> this->ID;
}

void Nguoi::ShowInformation()
{
    cout << "Name: " << getName() << ", Age: " << getAge() << ", Job: " << getJob() << ", ID: " << getID();
}
