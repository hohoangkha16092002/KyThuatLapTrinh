//2.14. Tìm ước số chung lớn nhất của hai số nguyên dương a và b.

#include<stdio.h>

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int UCLN_DeQui(int a,int b)
{
       	if(a==b)
        return a;
    else
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return UCLN_DeQui(a,b);
}

int main() {
 int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    // tinh USCLN cua a và b
    printf("USCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));
    printf("USCLN cua %d va %d (de qui) la: %d", a, b, UCLN_DeQui(a, b));
}
