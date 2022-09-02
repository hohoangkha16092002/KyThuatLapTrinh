//2.11 Viết chương trình đệ quy tìm chữ số lớn nhất của một số nguyên dương.

#include <iostream>
#include <math.h>

int Max_ChuSoNguyen(int n)
{
    int Max = 0;
    while (n > 0)
    {
        int t = n % 10;

        if (t > Max)
            Max = t;

        n = n / 10;
    }
    return Max;
}


int Max_ChuSoNguyen_DeQui(int n,int &max)
{    
    int t;
    if(n==0)
        return max;
    else
    {
        t=n%10;
        if(t > Max_ChuSoNguyen_DeQui(n/10,max))
        {
        	return Max_ChuSoNguyen_DeQui(n/10,t);
		}
		else return Max_ChuSoNguyen_DeQui(n/10,max);
    }
}

int main () {
	int max=0, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("\nChu so lon nhat cua so nguyen duong %d la: %d\n",n ,Max_ChuSoNguyen(n));
	printf("Chu so lon nhat cua so nguyen duong %d la (de qui): %d\n",n ,Max_ChuSoNguyen_DeQui(n,max));
}