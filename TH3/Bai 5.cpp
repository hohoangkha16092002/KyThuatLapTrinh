//Bài 5. Quản lý sinh viên.

/*
Chương trình đọc danh sách sinh viên từ file.  (D:\\HOCTAP\\Nam 2 HK1\\KyThuatLapTrinh\\TH3\\File\\dssv.txt)
Sắp xếp danh sách the thứ tự giảm dần của ĐTB.
In danh sách sinh viên đã sắp xếp ra màn hình.
*/

#include <stdio.h>

#define fname "D:\\HOCTAP\\Nam 2 HK1\\KyThuatLapTrinh\\TH3\\File\\dssv.txt"

typedef struct{
	char MSSV[9];
	char HoTen[30];
	float DTB;
} SinhVien;

// Ham doc danh sach sinh vien tu file
void DocDSSV(SinhVien sv[], int &soSV)
{
	//Mo file
	soSV = 0;
	FILE* fp = fopen(fname, "rt"); // Mo file van ban de doc
	if(fp == NULL) 
		printf("Khong mo duoc file!");
	else
	{
		while(!feof(fp))
		{
			fscanf(fp, "%[^,], %[^,], %f\n", &sv[soSV].MSSV, &sv[soSV].HoTen, &sv[soSV].DTB );
			soSV ++;			
		}
		// Ket thuc doc thong tin -> dong file
		fclose(fp);
	}
}

// Ham in ra danh sach sinh vien
void InDSSV(SinhVien sv[], int n)
{
	for(int i=0; i < n; i++)
		printf("%s\t%s\t%.2f\n", sv[i].MSSV, sv[i].HoTen, sv[i].DTB);
}

// Ham sap xep danh sach sinh vien theo thu tu giam dan cua diem TB
void SapXep(SinhVien sv[], int n)
{
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(sv[i].DTB < sv[j].DTB)
			{
				SinhVien t = sv[i];
				sv[i] = sv[j];
				sv[j] = t;		
			}
}

int main()
{
	SinhVien sv[100];
	int soSV = 0;
	DocDSSV(sv, soSV);
	printf("Danh sach sinh vien doc tu file:\n");
	InDSSV(sv, soSV);
	// Sap xep
	SapXep(sv, soSV);
	printf("Danh sach sinh vien da sap xep:\n");
	InDSSV(sv, soSV);	
}