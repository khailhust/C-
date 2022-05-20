#include "ThuVien.h"

void ThuVien::addCard()
{
    TheMuon The;
    The.InputCard();
    ListCard.push_back(The);
}

void ThuVien::deleteCard()
{
    string code;
    cout << "Nhap ma so the de xoa: ";
    cin.ignore();
    getline(cin, code);

    for (size_t i = 0; i < ListCard.size(); ++i)
    {
        if (code == ListCard.at(i).getIDCard())
        {
            ListCard.erase(ListCard.begin() + i);
        }
    }
}

void ThuVien::showInfor()
{
    for (size_t i = 0; i < ListCard.size(); ++i)
    {
        ListCard.at(i).ShowCard();
    }
}
