#pragma once
#include <iostream>
#include <string>
using namespace std;

class VanBan
{
private:
    string st;
public:
    VanBan();
    VanBan(string st);

    void Input();
    void OutPut();

    int wordCount();
    int charACount();
    void stringNormalize();
};

