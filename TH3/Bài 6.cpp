/*
Bài 6. - Đọc giá trị của dãy số nguyên từ file văn bản. 
File văn bản có 2 dòng: Dòng đầu tiên chứa số phần tử, 
dòng thứ hai chứa giá trị các phần tử cách nhau bởi khoảng trắng. 
- Sắp xếp dãy tăng dần 
- Lưu danh sách đã sắp xếp vào một file mới.
*/

#include <stdio.h>
#define MAX 100

// Ham doc mang tu file
void NhapMangTuFile(char fname[], int a[], int &n)
{
	FILE *fp = fopen(fname, "rt"); // Mo file van ban (t), chi doc (r)
	if(fp == NULL)
		printf("Khong mo duoc file!");
	else
	{
		// Doc so phan tu cua mang
		fscanf(fp, "%d\n", &n);
		// Doc n phan tu cua mang tu dong thu 2
		for(int i=0; i < n; i++)
			fscanf(fp, "%d", &a[i]);
		// Dong file lai sau khi xu ly xong
		fclose(fp);
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d  ", a[i]);
}

// Ham sap xep mang tang dan
void SapXepTangDan(int a[], int n)
{
	for(int i=0; i < n - 1; i++)
		for(int j=i+1; j < n; j++)
			if(a[i] > a[j])
				{
					int t = a[i]; a[i] = a[j]; a[j] = t;
				}
}

// Ham ghi mang vao file
void GhiMangVaoFile(char fname[], int a[], int n)
{
	FILE *fp = fopen(fname,"wt"); // Mo file van ban (t), chi ghi (w)
	if(fp == NULL)
		printf("Khong mo duoc file.");
	else
	{
		// Ghi n len file
		fprintf(fp, "%d\n", n);
		// Ghi n phan tu len dong 2
		for(int i=0; i < n; i++)
			fprintf(fp, "%d  ", a[i]);
		// dong file
		fclose(fp);
	}
}

int main() 
{
	int a[MAX];
	int n;
	// Doc mang tu file
	NhapMangTuFile("File\\array.txt", a, n);
	printf("Mang vua nhap:\n");
	XuatMang(a, n);
	// sap xep tang dan
	SapXepTangDan(a,n);
	printf("\n\nMang da sap xep tang dan:\n");
	XuatMang(a, n);
	// Ghi mang vao file
	GhiMangVaoFile("File\\array_sorted.txt", a, n);
}

