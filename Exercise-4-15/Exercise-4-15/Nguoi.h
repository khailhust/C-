#pragma once
#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
private:
    string Name;
    int Age;
    string Job;
    int ID;
public:
    Nguoi();
    Nguoi(string, int, string, int);

    string getName();
    int getAge();
    string getJob();
    int getID();

    void setName(string);
    void setAge(int);
    void setJob(string);
    void setID(int);

    void InputInformation();
    void ShowInformation();
};

