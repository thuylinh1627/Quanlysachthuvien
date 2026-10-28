
#ifndef SACH_H
#define SACH_H

#include <iostream>
#include <string>
using namespace std;

class Sach
{
private:
    string maSach;
    string tenSach;
    string tacGia;
    int namXuatBan;

public:
    Sach();
    Sach(string ma, string ten, string tg, int nam);

    void nhap();
    void xuat();

    string getMaSach();
    string getTenSach();
};

#endif
