#include "KhuPho.h"

int main()
{
    KhuPho Pho;
    int number = 0;
    cout << "Nhap so ho dan: ";
    cin >> number;
    for (int i = 0; i < number; ++i)
    {
        cout << "Nhap du lieu ho " << (i + 1) << ":" << endl;
        Pho.addHo();
    }
}
