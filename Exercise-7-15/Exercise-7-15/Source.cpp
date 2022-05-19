#include "CBGV.h"

int main()
{
    CBGV QuanLy;
    int Choose;
    while (true)
    {
        system("cls");
        cout << "1. Them moi can bo\n";
        cout << "2. Xoa can bo\n";
        cout << "3. In thong tin can bo\n";
        cout << "4. Tinh luong\n";
        cout << "0. Thoat\n";
        cout << "-----------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> Choose;
        switch (Choose)
        {
        case 1:
            QuanLy.addCBGV();
            system("pause");
            break;
        case 2:
            QuanLy.deleteCBGV();
            system("pause");
            break;
        case 3:
            QuanLy.showCBGV();
            system("pause");
            break;
        case 4:
            QuanLy.salaryCBGV();
            system("pause");
            break;
        case 0:
            cout << "Ban chon thoat!\n";
            system("pause");
            return 0;
        default:
            cout << "Lua chon khong hop le!\n";
            system("pause");
            break;
        }
    }
}