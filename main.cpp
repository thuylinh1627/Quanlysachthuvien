
#include <iostream>
#include "Sach.h"
using namespace std;
int main()
{
    Sach s;
    cout << "=== QUAN LY SACH THU VIEN ===" << endl;
    s.nhap();
    cout << endl;
    cout << "=== THONG TIN SACH ===" << endl;
    s.xuat();
    return 0;
}
