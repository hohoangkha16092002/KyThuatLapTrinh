//2.15. Tính S(n)= 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n), với n > 0

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

float Tinh(int n)
{
	unsigned int mau = 0;
    float tong = 0.0;
	for (int i = 1; i <= n; i++)
	{
		mau += i;
		tong += 1.0/mau;
	}
	return tong;
}
////////////////////////////////////
float Tinh_DeQui(int n)
{
    if (n==1) return 1;
    return (Tinh_DeQui(n-1)+2.0/(n*(n+1)));
}


int main ()
{
	int n,i;
	
	printf("Nhap n:");
	scanf("%d", &n);
	printf("\nGia tri bieu thuc cau 15: %f",Tinh(n));
	printf("\nGia tri bieu thuc cau 15 (de qui)): %f",Tinh_DeQui(n));
}