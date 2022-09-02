/*
2.8. Viết hàm đệ quy tính C(n, k) biết
C(n, k) = 1 nếu k = 0 hoặc k = n
C(n, k) = 0 nếu k > n
C(n ,k) = C(n-1, k) + C(n-1, k-1) nếu 0<k<n
*/

#include <stdio.h>

long tinhC(int n, int k)
{
    if (k==0 || k==n) return 1;
    if (k > n) return 0;
    else if (k > 0 &&  k < n)
    	return tinhC(n-1,k) + tinhC(n-1,k-1);
}

int main()
{
	int n, k;
	printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap k:");
    scanf("%d",&k);
    
    printf("Ket qua = %d", tinhC(n,k));
}