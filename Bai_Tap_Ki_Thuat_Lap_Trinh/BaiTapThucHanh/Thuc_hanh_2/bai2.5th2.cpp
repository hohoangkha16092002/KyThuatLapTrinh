#include<stdio.h>
#include<iostream>
#define max 100
using namespace std;
void nhapMang( int a[], int &n){
	do{
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
		if(n<=0) cout << "\nNhap loi!!!";
	}while(n<=0);
	for(int i=0;i<n;i++){
		cout << "\nNhap vao phan tu thu " << i << ": ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout << " " << a[i] << " ";
	}
}
void xapxep( int a[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]> a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int timX(int a[],int x, int l, int r){
		if(left>right) return -1;
		int mid=(l+r)/2;
		if(x==a[mid]) return mid;
		else{
			if(x<a[mid]) return timX(a,x,l,mid-1);
			else return timX(a,x,mid+1,r);
			}
		return -1;
	}
int main(){
	int a[max];
	int n,x;
	nhapMang(a,n);
	cout << "\nMang la: ";
	xuatMang(a,n);
	xapxep(a,n);
	cout << "\nMang sau khi xap xep la: ";
	xuatMang(a,n);
	cout << "\nNhap vao Gia tri X can tim: ";
	cin >> x;
	int vitri=timX(a,x,0,n-1);
	cout << "\nVi tri cua X la: " << vitri;
	return 0;
}
