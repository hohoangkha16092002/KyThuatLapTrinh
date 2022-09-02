#include <stdio.h>
#define MAX 100

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