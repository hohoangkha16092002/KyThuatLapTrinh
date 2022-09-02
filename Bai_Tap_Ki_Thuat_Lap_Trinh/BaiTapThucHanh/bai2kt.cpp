#include<iostream>
#include<stdio.h>
#include<math.h>
#define max 100 
using namespace std;
void NhapMang(int a[], int &n){
	do{
		cout << "\nNhap vao so luong phan tu cua mang: ";
		cin >> n;
		if(n<=0) cout << "\nSo luong phan tu cua mang phai lon hon 0";
	}
	while(n<=0);
	for(int i =0;i<n;i++){
		cout << "\nNhap vao phan tu thu " << i+1 << ": ";
		cin >> a[i];
	}
}
void InMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout << " " << a[i] << " ";
	}
}
int demleMang(int a[], int n){
	if(n==0) return 0;
	else
	{
		if(a[n-1]%2!=0) return 1+demleMang(a,n-1);
		else return demleMang(a,n-1);
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
int demsntMang(int a[], int n){
	if(n==0) return 0;
	else
	{
		if(ktsnt(a[n-1])==1) return 1+demsntMang(a,n-1);
		else return demsntMang(a,n-1);
	}
}
int MaxsntMang(int a[], int n){
	if(demsntMang(a,n)==0) return 0;
	else
	{
		if(ktsnt(a[n-1])==1 && a[n-1]>MaxsntMang(a,n-1)) return a[n-1];
		else return MaxsntMang(a,n-1);
	}
}
int main(){
	int a[max];
	int n;
	NhapMang(a,n);
	cout << "\nMang vua nhap la: \n";
	InMang(a,n);
	cout << "\nSo luong phan tu le co trong mang la: " << demleMang(a,n);
	cout << "\nSo nguyen to lon nhat trong mang la: " << MaxsntMang(a,n);
}
