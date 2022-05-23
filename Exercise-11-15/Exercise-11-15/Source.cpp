#include "SoPhuc.h"

int main()
{
    SoPhuc A;
    SoPhuc B;
    SoPhuc C;
    A.InPut();
    B.InPut();
    A.Show();
    B.Show();
    C = A + B;
    cout << "Tong = ";
    C.Show();
    C = A * B;
    cout << "Tich = ";
    C.Show();
}