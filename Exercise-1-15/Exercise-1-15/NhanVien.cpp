/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "NhanVien.h"

/*******************************************************************************
 * Function Definition
 ******************************************************************************/

NhanVien::NhanVien()
{
    Task = "unknow";
}

NhanVien::NhanVien(string Name, int Age, string Gender, string Address, string Task) : CanBo(Name, Age, Gender, Address)
{
    this->Task = Task;
}

string NhanVien::getTask()
{
    return Task;
}

void NhanVien::setTask(string Task)
{
    this->Task = Task;
}

void NhanVien::Input()
{
    CanBo::Input();
    cout << "Enter Task: ";
    getline(cin, this->Task);
}

void NhanVien::Print()
{
    CanBo::Print();
    cout << ", Task: " << getTask() << endl;
}
/*******************************************************************************
 * End of file
 ******************************************************************************/