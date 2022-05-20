#include "TheMuon.h"

TheMuon::TheMuon()
{
}

TheMuon::TheMuon(string IDCard, int borrowDate, int payDate, string IDBook, SinhVien Student)
{
    this->IDCard = IDCard;
    this->borrowDate = borrowDate;
    this->payDate = payDate;
    this->IDBook = IDBook;
    this->Student = Student;
}

string TheMuon::getIDCard()
{
    return IDCard;
}

int TheMuon::getBorrowDate()
{
    return borrowDate;
}

int TheMuon::getPayDate()
{
    return payDate;
}

string TheMuon::getIDBook()
{
    return IDBook;
}

SinhVien TheMuon::getStudent()
{
    return Student;
}

void TheMuon::setIDCard(string IDCard)
{
    this->IDCard = IDCard;
}

void TheMuon::setBorrowDate(int borrowDate)
{
    this->borrowDate = borrowDate;
}

void TheMuon::setPayDate(int payDate)
{
    this->payDate = payDate;
}

void TheMuon::setIDBook(string IDBook)
{
    this->IDBook = IDBook;
}

void TheMuon::setStudent(SinhVien Student)
{
    this->Student = Student;
}

void TheMuon::InputCard()
{
    cout << "Enter ID Card: ";
    cin.ignore();
    getline(cin, this->IDCard);

    cout << "Enter Borrowed Date: ";
    cin >> this->borrowDate;

    cout << "Enter Payment Date: ";
    cin >> this->payDate;

    cout << "Enter ID Book: ";
    cin.ignore();
    getline(cin, this->IDBook);

    Student.InputSV();
}

void TheMuon::ShowCard()
{
    cout << "ID Card: " << getIDCard() << ", Borrowed Date: " << getBorrowDate() << ", Payment Date: " << getPayDate() << ", ID Book: " << getIDBook();
    Student.ShowSV();
}
