#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

float Cau_a(float x, int n){
	float no = 1;
	for (int i = 1; i <= n ; i++)
		{
			no = no * x;
		}
	return no;		
}

float DeQuiCau_a(float x, int n)
{
    if(n==1)
    	return x;
    else
    	return DeQuiCau_a(x,n-1)*x;
}
/////////////////////////////////////////////////////
int Cau_b(int n)
{
    int cau_b = 1;
    for (int i = 1; i <= n; i++)
        cau_b *= i;
    return cau_b;
}

int DeQuiCau_b(int n)
{
    if (n == 1)
        return 1;
    return n * DeQuiCau_b(n - 1);
}
/////////////////////////////////////////////////////
int Cau_c(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		{
		tong += i;
		}
	return tong;
}

int DeQuiCau_c(int n)	
{
	if (n == 1)
    	return 1;
    return n + DeQuiCau_c(n - 1);	
}	
/////////////////////////////////////////////////////
int Cau_d(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		{
			tong += 2*i-1;
		}
return tong;
}

int DeQuiCau_d(int n)	
{
	if (n == 1)
    	return 1;
    else
    	return (2*n-1) + DeQuiCau_d(n-1);
}
/////////////////////////////////////////////////////
int Cau_e(int n)
{	
	int tong = 0;
	for (int i = 1; i <= n; i ++ )
	{
		tong += i*2;
	}
return tong;
}

int DeQuiCau_e(int n)
{
	if (n == 1)
		return 2;
	else 
	return 2*n + DeQuiCau_e(n-1);
}
/////////////////////////////////////////////////////
bool ktsnt(int n)
{
    int i;
    if (n < 2) return 0;
    for (i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return 0;
    return 1;
}
 
int tongsnt(int n)
{
    int i,s=0;
    for (i=2; i<=n; i++)
        if (ktsnt(i)==1)
            s=s+i;
    return s;
}
//============================
bool ktsntdequi(int n, int i = 2)
{
	if (i == n) return 1;
	if (n < 2) return 0;
	if (n % i == 0) return 0;
	return ktsntdequi(n, i+1);
}
 
int tongsntdequi(int n)
{
    if( n==2 ) return 2;
    else
    if( ktsntdequi(n)==0 ) return tongsntdequi(n-1);
    else
    if( ktsntdequi(n)==1 ) return n + tongsntdequi(n-1);
}
////////////////////////////
int Demsnt(int n)
{
	int s=0;
	for(int i = 0; i <= n; i++)
    {
		if(ktsnt(i))
		{
			s++;
		}
	}
	return s;
}

int Demsntdequi(int n)
{
	int s=0;
	if (n < 2) return 0;
	else
	{
		s++;
		if(ktsntdequi(n)) return s + Demsntdequi(n-1);
		else return Demsntdequi(n-1);
	}
}
///////////////////////////////////
int main ()
{	
	int a[100];
	float x; int n,i;
	printf("Nhap x:");
	scanf("%f", &x);
	printf("Nhap n:");
	scanf("%d", &n);
	printf("\nGia tri bieu thuc cau a: %.1f",Cau_a(x,n));
	printf("\nGia tri bieu thuc cau a (de qui): %.1f",DeQuiCau_a(x,n));
	printf("\n========================================");
	printf("\nGia tri bieu thuc cau b: %d",Cau_b(n));
	printf("\nGia tri bieu thuc cau b (de qui): %d",DeQuiCau_b(n));
	printf("\n========================================");
	printf("\nGia tri bieu thuc cau c: %d",Cau_c(n));
	printf("\nGia tri bieu thuc cau c (de qui): %d",DeQuiCau_c(n));
	printf("\n========================================");
	printf("\nGia tri bieu thuc cau d: %d",Cau_d(n));
	printf("\nGia tri bieu thuc cau d (de qui): %d",DeQuiCau_d(n));
	printf("\n========================================");
	printf("\nGia tri bieu thuc cau e: %d",Cau_e(n));
	printf("\nGia tri bieu thuc cau e:(de qui): %d",DeQuiCau_e(n));
	printf("\n========================================");
	printf("\nTong cac so nguyen to <= n la: %d",tongsnt(n));
	printf("\nTong cac so nguyen to <= n (de qui) la: %d",tongsntdequi(n));
	printf("\n========================================");
	printf("\nDem so nguyen to <= n la: %d",Demsnt(n));
	printf("\nDem so nguyen to <= n (de qui) la: %d",Demsntdequi(n));
}
