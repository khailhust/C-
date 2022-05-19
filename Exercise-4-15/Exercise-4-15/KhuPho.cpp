#include "KhuPho.h"

void KhuPho::addHo()
{
    HoGiaDinh GiaDinh;
    Nguoi ThanhVien;
    ThanhVien.InputInformation();
    GiaDinh.addMember(ThanhVien);
}
