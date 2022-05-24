/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "QLCB.h"

/*******************************************************************************
 * Codes
 ******************************************************************************/

int main()
{
    QLCB Qlcb; /*Tao doi tuong kieu QLCB*/
    char Choice = 0;
    while (true)
    {
        system("cls");
        cout << "---------------------------------------------\n";
        cout << "-        CHUONG TRINH QUAN LY CAN BO        -\n";
        cout << "---------------------------------------------\n";
        cout << "1. Them moi can bo" << endl;
        cout << "2. Tim kiem theo ho ten" << endl;
        cout << "3. Hien thi thong tin ve danh sach cac can bo" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "---------------------------------------------\n";
        cout << "Nhap lua chon: ";
        cin >> Choice;
        switch (Choice)
        {
        case '1':
            cout << "Ban da chon them can bo!\n";
            Qlcb.addCanBo();
            system("pause");
            break;
        case '2':
            cout << "Tim kiem thong tin can bo\n";
            if (!Qlcb.searchCanBo())
            {
                cout << "Khong tim thay!\n";
            }
            system("pause");
            break;
        case '3':
            cout << "Thong tin ve danh sach cac can bo:\n";
            Qlcb.printList();
            system("pause");
            break;
        case '0':
            cout << "Ban chon Thoat!";
            Qlcb.Exit();
            system("pause");
            break;
        default:
            cout << "Khong co lua chon nay!";
            system("pause");
            break;
        }
    }
}
/*******************************************************************************
 * End of file
 ******************************************************************************/