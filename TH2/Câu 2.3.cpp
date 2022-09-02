/*2.3. Một loại vi trùng cứ sau mỗi giờ lại nhân bản lên k lần. 
Hỏi sau h giờ sẽ có mấy con vi trùng nếu ban đầu có n con? */

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

int vitrung(int n, int k, int h)
{
	for (int i = 1; i <= h; i++)
		{
			n = n*k;
		}
	return n;
}

int vitrung_dequy(int n, int k, int h)
{
	if (h == 0) return n;
	else return vitrung_dequy(n,k,h-1)*k;
}
int main ()
{
	int n, k, h, vt;
	printf("\nNhap so vi trung ban dau:"); scanf("%d", &n);
	printf("\nNhap so lan sau moi gio vi trung nhan len:"); scanf("%d", &k);
	printf("\nNhap so gio vi trung nhan ban duoc:"); scanf("%d", &h);
	vitrung(n,k,h);
	printf("\nSo vi trung sau %d gio tu %d vi trung nhan len %d lan la: %d",h, n, k, vitrung(n,k,h));
	printf("\nSo vi trung sau %d gio tu %d vi trung nhan len %d lan (de quy) la: %d",h, n, k, vitrung_dequy(n,k,h));
}

