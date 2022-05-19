#pragma once
#include <iostream>
#include <string>
using namespace std;
class Nguoi
{
private:
    string Name;
    int Age;
    string HomeTown;
    string ID;
    double Salary;
    double Bonus;
    double Penalty;
    double realSalary;
public:
    Nguoi();
    Nguoi(string Name, int Age, string HomeTown, string ID, double Salary, double Bonus, double Penalty, double realSalary);

    string getName();
    int getAge();
    string getHomeTown();
    string getID();
    double getSalary();
    double getBonus();
    double getPenalty();
    double getRealSalary();

    void setName(string);
    void setAge(int);
    void setID(string);
    void setHomeTown(string);
    void setSalary(double);
    void setBonus(double);
    void setPenalty(double);
    void setRealSalary(double);

    void InputInformation();
    void ShowInformation();
};

