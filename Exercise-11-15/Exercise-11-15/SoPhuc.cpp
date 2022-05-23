#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
    PhanThuc = 0;
    PhanAo = 0;
}

SoPhuc::SoPhuc(double PhanThuc, double PhanAo)
{
    this->PhanThuc = PhanThuc;
    this->PhanAo = PhanAo;
}

double SoPhuc::getPhanThuc()
{
    return PhanThuc;
}

double SoPhuc::getPhanAo()
{
    return PhanAo;
}

void SoPhuc::setPhanThuc(double PhanThuc)
{
    this->PhanThuc = PhanThuc;
}

void SoPhuc::setPhanAo(double PhanAo)
{
    this->PhanAo = PhanAo;
}

void SoPhuc::InPut()
{
    cout << "Nhap phan thuc: ";
    cin >> this->PhanThuc;

    cout << "Nhap phan ao: ";
    cin >> this->PhanAo;
}

void SoPhuc::Show()
{
    cout << getPhanThuc() << " + " << getPhanAo() << "i" << endl;
}

SoPhuc SoPhuc::operator+(SoPhuc z)
{
    SoPhuc complex;

    complex.PhanThuc = this->PhanThuc + z.PhanThuc;
    complex.PhanAo = this->PhanAo + z.PhanAo;

    return complex;
}

SoPhuc SoPhuc::operator*(SoPhuc z)
{
    SoPhuc complex;

    complex.PhanThuc = this->PhanThuc * z.PhanThuc - this->PhanAo * z.PhanAo;
    complex.PhanAo = this->PhanThuc * z.PhanAo + this->PhanAo * z.PhanThuc;

    return complex;
}

