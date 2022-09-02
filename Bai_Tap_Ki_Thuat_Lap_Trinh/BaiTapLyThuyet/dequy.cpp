#include<iostream>
#define max 100
using namespace std;
int SoVT(int n, int h){
	if(h==0) return n;
	return 2*SoVT(n,h-1);
}
int Tien(float n, int y){
	if(y==0) return n;
	return (1+0.12)*Tien(n,y-1);
}
void nhapMang( int a[], int &n){
	do{
		cout << "\nNhap vao so luong phan tu cua mang: ";
		cin >> n;
	}while(n<=0);
	for( int i=0;i<n;i++){
		cout << "\nNhap vao phan tu thu " << i+1 << " ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n){
	cout << "\nMang la: ";
	for(int i=0;i<n;i++){
		cout << " " << a[i];
	}
}
int TimViTri( int a[], int x, int l, int r){
	int mid=(l+r)/2;
	if(a[mid]==x) return mid;
	if(a[mid]>x) return TimViTri(a,x,l,mid-1);
	if(a[mid]<x) return TimViTri(a,x,mid+1,r);
}
int tongPT( int a[], int n){
	if(n==0) return 0;
	return tongPT(a,n-1)+a[n-1];
}
int tongDuong(int a[],int n){
	if(n==0) return 0;
	else{
	if(a[n-1]>0) return tongDuong(a,n-1)+a[n-1];
	return tongDuong(a,n-1);}
}
int Max( int a[],int n){
	if(n==1) return a[0];
	if(a[n-1]>Max(a,n-1)) return a[n-1];
	else{
	return Max(a,n-1);}
}
int main(){
	int n;
	int a[max];
	//cout << "So vi trung la: " << SoVT(3,5);
	//float m=Tien(1000,30);
	//cout << "\nSo tien la: " << m;
	nhapMang(a,n);
	xuatMang(a,n);
	int tong=tongPT(a,n);
	cout << endl << tong;
	cout << endl << tongDuong(a,n);
	cout << endl << Max(a,n);
//	int a[]={1,2,3,5,9};
	//int vt= TimViTri(a,5,0,4);
	//cout << endl << vt;
}
