/*
2.10. Viết các chương trình sau đây bằng cả phương pháp đệ quy và không đệ quy:

a. Tính tổng các phần tử của mảng.

b. Tính tổng các phần tử > 0 của mảng.

c. Đếm số lượng phần tử là số nguyên tố của mảng.

d. Tìm phần tử lớn nhất của mảng.
*/

#include <iostream>
#include <math.h>
#define MAX 50
using namespace std;

// Nhập mảng;
void inArray(int a[], int &n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

// Xuất mảng;
void outArray(int a[], int n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d ", i, a[i]);
	}
}

////////////////////////////////////////////////
//a. Tính tổng các phàn tử của mảng
int Sum(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i]; 
	}
	return s;
}

//---Đệ Qui---//
int Sum_DeQui(int a[], int n)
{
	if(--n<0) return 0;
	else return a[n] + Sum_DeQui(a,n);
}
////////////////////////////////////////////////
//b. Tính tổng các phần tử > 0 của mảng.
int SumMoreThan0(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i]>0)
			s += a[i]; 
	}
	return s;
}

//---Đệ Qui---//
int SumMoreThan0_DeQui(int a[], int n)
{
	if(--n<0) return 0;
	else if(a[n]>0) 
	{
		return a[n] + SumMoreThan0_DeQui(a,n);
	}
	else return SumMoreThan0_DeQui(a,n);
}

/////////////////////////////////////////////////
//c. Đếm số lượng phần tử là số nguyên tố của mảng.
// Kiểm tra số nguyên tố
bool CheckSNT(int n)
{
    int i;
    if (n < 2) return false;
    for (i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return false;
    return true;
}

// Đếm số nguyên tố
int CountSNT(int a[],int n)
{
	int count = 0;
	for(int i = 0; i <= n; i++)
    {
		if(CheckSNT(a[i]))
		{
			count++;
		}
	}
	return count;
}
//---Đệ Qui---//
// Kiểm tra số nguyên tố bằng đệ qui
bool CheckSNT_DeQui(int n, int i)
{
	if (i == n) return 1;
	if (n < 2) return 0;
	if (n % i == 0) return 0;
	return CheckSNT_DeQui(n, i+1);
}

// Đếm số nguyên tố bằng đệ quy
int CountSNT_DeQui(int a[], int n)
{
	int i = n;
	if (n < 1) return 0;
	else
	{
		if(CheckSNT_DeQui(a[i-1],2))
		{
			return 1 + CountSNT_DeQui(a,n-1);	
		}
		else return CountSNT_DeQui(a,n-1);
	}
}

/////////////////////////////////////////////////
//d. Tìm phần tử lớn nhất của mảng.

int largestElement(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

//---Đệ Qui---//
int largestElement_DeQui(int a[], int n)
{
	int i = n;
    if(n==1)
    	return a[0];
    else 
	{
    	if (a[i-1] > largestElement_DeQui(a,n-1))
    		return a[i-1];
		else return largestElement_DeQui(a,n-1);	
	}
}
////////////////////////////////////////////////////////
int main () {
	int a[MAX];
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n <= 0 || n > MAX);
	inArray(a, n);
	outArray(a, n);
	printf("\nTong cac phan tu cua mang: %d", Sum(a, n));
	printf("\nTong cac phan tu cua mang (de qui): %d", Sum_DeQui(a, n));
	printf("\n\n");
	printf("\nTong cac phan tu > 0 cua mang: %d", SumMoreThan0(a, n));
	printf("\nTong cac phan tu > 0 cua mang (de qui): %d", SumMoreThan0_DeQui(a, n));
	printf("\n\n");
	printf("\nSo luong so nguyen to la: %d", CountSNT(a, n));
	printf("\nSo luong so nguyen to la (de qui): %d", CountSNT_DeQui(a, n));	
	printf("\n\n");
	printf("\nPhan tu lon nhat trong mang la: %d", largestElement(a, n));
	printf("\nPhan tu lon nhat trong mang la (de qui): %d", largestElement_DeQui(a, n));	
	
	return 0;
}




