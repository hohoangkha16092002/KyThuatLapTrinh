/*
Câu 1 (5đ). Viết chương trình thực hiện các yêu cầu sau:
a. 	Hàm đệ quy trả về giá trị biểu thức S = −1 + 2 − 3 + 4 +. . . + (−1)^n *n,
	với n là số nguyên > 0. (Giải bằng đệ quy: 3.5đ, không đệ quy: 1đ)
	
b. 	Chương trình chính sử dụng các hàm trên để minh họa (1.5đ)
*/

#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int Tinh(int n){
	int tong=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0) tong+=-i;
		else tong+=i;
	}
	return tong;
}
int Tinh_DeQui(int n){
	if(n==0) return 0;
	else
	{
		if(n%2!=0) return -n+Tinh_DeQui(n-1);
		else return n+Tinh_DeQui(n-1);
	}
}
int main(){
	int n;
	do{
		printf("\nNhap vao so nguyen N>0: ");
		scanf("%d", &n);
		if(n<=0) printf("\nNhap N sai yeu cau!!! Hay nhap lai");
	} while(n<=0);
	printf("\nKet qua cua tong khi khong su dung de quy la: %d", Tinh(n));
	printf("\nKet qua cua tong khi su dung de quy la: %d", Tinh_DeQui(n));
}