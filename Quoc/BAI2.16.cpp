#include <iostream>
using namespace std;

int Nhap()
{
	int x;
	do
	{
		scanf("%d", &x);
		if (x < 0)
			printf("Nhap sai, yeu cau nhap lai!");
	} while (x < 0);
	return x;
}

int Tinh(int n)
{
	int s = 0, t = 0;
	for(int i = 1; i <= n; i++)
	{
		t = t + i;
		s = s + t;
	}
	return s;
}

int main()
{
	int n; 

	printf("Nhap so nguyen n: ");
	n = Nhap();
	printf("Ket qua la: %d",Tinh(n));

	return 0;
}
