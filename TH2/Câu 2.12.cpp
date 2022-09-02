//2.12. Viết chương trình đệ quy
//		tính tổng các chữ số của một số nguyên dương.

#include <iostream>
#include <math.h>

int Sum_ChuSoNguyen(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int t = n % 10;
		
        sum += t;

        n = n / 10;
    }
    return sum;
}

int Sum_ChuSoNguyen_DeQui(int n,int &sum)
{    
    int t;
	
    if(n==0)
        return sum;
    else
    {
        t=n%10;
        return Sum_ChuSoNguyen_DeQui(n/10,sum) + t;                 
    }
}

int main () {
	int sum=0, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("\nTong cac chu so cua so nguyen duong %d la: %d\n",n ,Sum_ChuSoNguyen(n));
	printf("Tong cac chu so cua so nguyen duong %d la (de qui): %d\n",n ,Sum_ChuSoNguyen_DeQui(n,sum));
}