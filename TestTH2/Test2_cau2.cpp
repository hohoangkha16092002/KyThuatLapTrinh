/*
Câu 2 (5đ). Viết chương trình thực hiện các yêu cầu sau trên mảng 1 chiều các số nguyên:
a. Hàm nhập mảng từ bàn phím theo khuôn mẫu void NhapMang(int a[], int &n). (1đ)
b. Hàm in mảng ra màn hình theo khuôn mẫu void InMang(int a[], int n). (0.5đ)
c. Hàm đệ quy trả về số lượng phần tử lẻ của mảng. (1.5đ)
d. Hàm đệ quy trả về số nguyên tố lớn nhất trong mảng. Nếu mảng không có số nguyên
   tố nào thì trả về 0. (1.5đ)
e. Chương trình chính sử dụng các hàm trên để minh họa (0.5đ)
*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#define max 100 
using namespace std;
void NhapMang(int a[], int &n){
	do{
		printf("\nNhap vao so luong phan tu cua mang: ");
		scanf("%d", &n);
		if(n<=0) printf("\nSo luong phan tu cua mang phai lon hon 0");
	}
	while(n<=0);
	for(int i =0;i<n;i++){
		printf("\nNhap vao phan tu thu %d:",i+1);		
		scanf("%d", &a[i]);
	}
}
void InMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);	
	}
}
int CountOddInArray(int a[], int n){
	if(n==0) return 0;
	else
	{
		if(a[n-1]%2!=0) return 1+CountOddInArray(a,n-1);
		else return CountOddInArray(a,n-1);
	}
}
int ktsnt(int n){
	int dem=0;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
int CountPrimeNumInArray(int a[], int n){
	if(n==0) return 0;
	else
	{
		if(ktsnt(a[n-1])==1) return 1+CountPrimeNumInArray(a,n-1);
		else return CountPrimeNumInArray(a,n-1);
	}
}
int MaxPrimeNumInArray(int a[], int n){
	if(CountPrimeNumInArray(a,n)==0) return 0;
	else
	{
		if(ktsnt(a[n-1])==1 && a[n-1]>MaxPrimeNumInArray(a,n-1)) return a[n-1];
		else return MaxPrimeNumInArray(a,n-1);
	}
}
int main(){
	int a[max];
	int n;
	NhapMang(a,n);
	printf("\nMang vua nhap la: \n");
	InMang(a,n);
	printf("\nSo luong phan tu le co trong mang la: %d", CountOddInArray(a,n));
	printf("\nSo nguyen to lon nhat trong mang la: %d", MaxPrimeNumInArray(a,n));
}