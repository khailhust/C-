#include "QLPTGT.h"

int main()
{
    QLPTGT QuanLy;
    char Choice;

    while (true)
    {
        system("cls");
        cout << "-------------------------------------------------\n";
        cout << "-  CHUONG TRINH QUAN LY PHUONG TIEN GIAO THONG  -\n";
        cout << "-------------------------------------------------\n";
        cout << "1. Them Phuong Tien\n";
        cout << "2. Xoa Phuong Tien\n";
        cout << "3. Tim Phuong Tien\n";
        cout << "4. In danh sach Phuong Tien\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "-------------------------------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> Choice;
        switch (Choice)
        {
        case '1':
            QuanLy.addVehicle();
            system("pause");
            break;
        case '2':
            if (!QuanLy.deleteVehicle())
            {
                cout << "Khong the xoa hoac khong co phuong tien nay!\n";
            }
            system("pause");
            break;
        case '3':
            cout << "Nhap cac thong tin de tim kiem:\n";
            if (!QuanLy.searchVehicle())
            {
                cout << "Khong tim thay!\n";
            }
            system("pause");
            break;
        case '4':
            cout << "Danh sach cac phuong tien:\n";
            QuanLy.printList();
            system("pause");
            break;
        case '0':
            cout << "Thoat chuong trinh!\n";
            system("pause");
            QuanLy.ExitProgram();
        default:
            cout << "Lua chon khong hop le!\n";
            system("pause");
            break;
        }
    }
}