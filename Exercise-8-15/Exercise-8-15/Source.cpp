#include "ThuVien.h"

int main()
{
    ThuVien QuanLy;
    int Choose = 0;
    while (true)
    {
        system("cls");
        cout << "----------------------------------\n";
        cout << "1. Them the\n";
        cout << "2. Xoa the\n";
        cout << "3. Hien thi thong tin cac the\n";
        cout << "0. Thoat\n";
        cout << "----------------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> Choose;
        switch (Choose)
        {
        case 1:
            QuanLy.addCard();
            system("pause");
            break;
        case 2:
            QuanLy.deleteCard();
            system("pause");
            break;
        case 3:
            QuanLy.showInfor();
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