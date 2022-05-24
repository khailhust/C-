/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "QLCB.h"

/*******************************************************************************
 * Function Definition
 ******************************************************************************/

void QLCB::addCanBo()
{
    CanBo* canBo = nullptr;
    char choice = 0;
    do
    {
        system("cls");
        cout << "Them Can Bo" << endl;
        cout << "---------------------------------------------\n";
        cout << "1.Them Cong nhan" << endl;
        cout << "2.Them Ky Su" << endl;
        cout << "3.Them Nhan Vien" << endl;
        cout << "0.Quay lai" << endl;
        cout << "---------------------------------------------\n";
        cout << "Nhap lua chon(0,1,2,3): ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            canBo = new CongNhan;
            break;
        case '2':
            canBo = new KySu;
            break;
        case '3':
            canBo = new NhanVien;
            break;
        case '0':
            return;
        default:
            cout << "Khong co lua chon nay!\n";
            system("pause");
            break;
        }
    } while (choice < '0' || choice > '3');

    if (nullptr != canBo)
    {
        canBo->Input();
        listCanBo.push_back(canBo);
    }
}

bool QLCB::searchCanBo()
{
    string Name;
    bool check = false;

    cout << "Nhap ten can tim: ";
    cin.ignore();
    getline(cin, Name);
    for (size_t i = 0; i < listCanBo.size(); ++i)
    {
        if (Name == listCanBo.at(i)->getName())
        {
            listCanBo.at(i)->Print();
            check = true;
        }
    }

    return check;
}

void QLCB::printList()
{
    int size = listCanBo.size();

    if (0 != size)
    {
        for (int i = 0; i < size; ++i)
        {
            listCanBo.at(i)->Print();
        }
    }
    else
    {
        cout << "Danh sach trong!\n";
    }

}

void QLCB::Exit()
{
    exit(0);
}
/*******************************************************************************
 * End of file
 ******************************************************************************/