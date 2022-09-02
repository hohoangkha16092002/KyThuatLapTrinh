//2.16. Tính S(n) = 1 + (1 + 2) + (1 + 2 + 3) +...+ (1 + 2 + 3 +...+ n) , với n > 0.

#include <iostream>
#include <math.h>
using namespace std;

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

int calcSeriesSum(int n) {
   return (n*(n + 1)*(2*n + 4))/12;
}


int main()
{
    int n,i;
	
	printf("Nhap n:");
	scanf("%d", &n);
	printf("\nTong cau 2.16 la: %d",Tinh(n));
	printf("\nTong cau 2.16 la: %d",calcSeriesSum(n));
}