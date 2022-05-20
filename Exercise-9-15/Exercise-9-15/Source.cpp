#include "QuanLy.h"

int main()
{
    QuanLy Manager;
    int choose = 0;
    while (true)
    {
        system("cls");
        cout << "-----------------------------------\n";
        cout << "1. Them hoa don\n";
        cout << "2. Hien thong tin cac ho\n";
        cout << "3. Xoa hoa don\n";
        cout << "4. Sua hoa don\n";
        cout << "0. Thoat\n";
        cout << "------------------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Them hoa don:\n";
            Manager.addBill();
            system("pause");
            break;
        case 2:
            cout << "Thong tin khach hang:\n";
            Manager.showList();
            system("pause");
            break;
        case 3:
            Manager.deleteBill();
            system("pause");
            break;
        case 4:
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