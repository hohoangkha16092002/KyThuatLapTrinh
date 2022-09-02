#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int sovitrung(int h,int k,int n){
	if(h==1) return n*k;
	return sovitrung(h-1,k,n)*k;
}
int main(){
	int n,h,k;
	cout << "\nNhap vao so vi trung ban dau: ";
	cin >> n;
	cout << "\nNhap vao so lan nhan ban vi trung: ";
	cin >> k;
	cout << "\nNhap vao so gio: ";
	cin >> h;
	cout << "\nSo vi trung sau "<< h <<"gio la: "<< sovitrung(h,k,n);
}
