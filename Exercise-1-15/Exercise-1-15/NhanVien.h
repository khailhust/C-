#pragma once
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "CanBo.h"

 /*******************************************************************************
  * Class Definition
  ******************************************************************************/

class NhanVien : public CanBo
{
private:
    string Task;
public:
    NhanVien();
    NhanVien(string Name, int Age, string Gender, string Address, string Task);

    string getTask();
    void setTask(string Task);

    void Input();
    void Print();
};
/*******************************************************************************
 * End of file
 ******************************************************************************/
