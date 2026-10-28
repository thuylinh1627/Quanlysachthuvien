
#include "Sach.h"

Sach::Sach()
{
    maSach = "";
    tenSach = "";
    tacGia = "";
    namXuatBan = 0;
}

Sach::Sach(string ma, string ten, string tg, int nam)
{
    maSach = ma;
    tenSach = ten;
    tacGia = tg;
    namXuatBan = nam;
}

void Sach::nhap()
{
    cout << "Nhap ma sach: ";
    getline(cin, maSach);

    cout << "Nhap ten sach: ";
    getline(cin, tenSach);

    cout << "Nhap tac gia: ";
    getline(cin, tacGia);

    cout << "Nhap nam xuat ban: ";
    cin >> namXuatBan;
    cin.ignore();
}

void Sach::xuat()
{
    cout << "Ma sach: " << maSach << endl;
    cout << "Ten sach: " << tenSach << endl;
    cout << "Tac gia: " << tacGia << endl;
    cout << "Nam xuat ban: " << namXuatBan << endl;
}

string Sach::getMaSach()
{
    return maSach;
}

string Sach::getTenSach()
{
    return tenSach;
}
