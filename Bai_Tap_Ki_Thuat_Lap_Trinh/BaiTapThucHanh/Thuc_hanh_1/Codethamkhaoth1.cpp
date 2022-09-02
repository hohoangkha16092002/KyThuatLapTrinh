/*
 * Chuong trinh quan ly sinh vien don gian
 */
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// Khai bao cau truc sinh vien
typedef struct {
    char MSSV[9];
    char hoTen[30];
    float DTB;
} SinhVien;

// Ham nhap thong tin 1 sinh vien
void NhapSV(SinhVien &s) {
    fflush(stdin);// Xoa vung dem cua STDIN
    cout << "MSSV:";
    gets(s.MSSV);
    cout << "Ho ten:";
    gets(s.hoTen);
    cout << "Diem trung binh:";
    cin >> s.DTB;
}

// Ham xuat thong tin 1 sinh vien
void XuatSV(SinhVien s) {
    printf("%-15s%-35s%-3.2f\n", s.MSSV, s.hoTen, s.DTB);
}

// Ham nhap thong tin 1 danh sach sinh vien
void NhapDSSV(SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        NhapSV(sv[i]);
    }
}

// Ham nhap thong tin 1 danh sach sinh vien
void XuatDSSV(SinhVien sv[], int n) {
    cout << "Danh sach sinh vien:" << endl;
    for (int i = 0; i < n; i++)
        XuatSV(sv[i]);
}

// Ham tim sv theo ma so
int TimSV(char ms[], SinhVien sv[], int n) {
    for (int i = 0; i < n; i++)
        if (strcmp(ms, sv[i].MSSV) == 0) return i;
    return -1; // Khong tim thay
}

// Ham sap xep danh sach tang/giam dan theo DTB (mac dinh: giam dan)
void SapXep(SinhVien sv[], int n, bool sxTang=false)
{
    for(int i=0; i < n-1; i++)
        for(int j=i+1; j < n; j++)
            if(sxTang)
            {
                if(sv[i].DTB > sv[j].DTB)
                {
                    SinhVien t = sv[i]; 
					sv[i] = sv[j]; 
					sv[j] =  t;
                }
            }
            else {
                if (sv[i].DTB < sv[j].DTB) {
                    SinhVien t = sv[i];
                    sv[i] = sv[j];
                    sv[j] = t;
                }
            }
}

int main() {
    SinhVien sv[100];
    char ms[9];
    int n;
    do {
        cout << "Nhap so luong sinh vien:";
        cin >> n;
    } while (n <= 0 || n > 100);
    NhapDSSV(sv, n);
    XuatDSSV(sv, n);

    fflush(stdin);
    cout << "Nhap MSSV can tim:";
    gets(ms);
    int vt = TimSV(ms, sv, n);
    if (vt >= 0) // tim thay
    {
        cout << "Thong tin sinh vien co ma " << ms << endl;
        XuatSV(sv[vt]);
    } else // Khong tim thay
        cout << "Khong tim thay SV co ma so nay!";

    SapXep(sv,n, true);
    cout << "Danh sach SV sau khi sap xep:" << endl;
    XuatDSSV(sv, n);
    return 0;
}

