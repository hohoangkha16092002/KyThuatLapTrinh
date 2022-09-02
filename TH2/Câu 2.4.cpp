/*2.4. Mang số tiền m USD gửi ngân hàng, lãi suất cố định là i%/năm. 
Giả sử tiền lãi của mỗi năm được gộp với tiền gốc làm tiền gửi cho năm sau. 
Hỏi số tiền có được sau n năm là bao nhiêu?*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

float sotien(float m, float i, int n)
{
	for (int a = 1; a <= n; a++)
		{
			m = m+(m*i/100);
		}
	return m;
}

float sotien_dequy(float m, float i, int n)
{
	if (n == 0) return m;
	else return sotien_dequy(m+(m*i/100), i, n-1);
}

int main ()
{
	int n;
	float m, i;
	printf("\nNhap so tien ban dau:"); scanf("%f", &m);
	printf("\nNhap so lai suat co dinh hang nam:"); scanf("%f", &i);
	printf("\nNhap so nam:"); scanf("%d", &n);
	printf("\nSo tien co duoc sau %d nam la: %0.2f", n, sotien(m,i,n));
	printf("\nSo tien co duoc sau %d nam (de quy) la: %0.2f", n, sotien_dequy(m,i,n));
}
