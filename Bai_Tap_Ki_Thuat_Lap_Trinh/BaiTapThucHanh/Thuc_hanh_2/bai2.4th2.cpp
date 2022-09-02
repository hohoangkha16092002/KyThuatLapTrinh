#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int sotien(int m, float i, int n){
	if(n==0) return m;
	return (1+i)*sotien(m,i,n-1);
}
int main(){
	int m,n;
	float i;
	cout << "\nNhap vao so tien ban dau: ";
	cin >> m;
	cout << "\nNhap vao so % lai suat: ";
	cin >> i;
	cout << "\nNhap vao so nam: ";
	cin >> n;
	cout<< "\nSo tien sau " << n << " nam la: " <<sotien(m,i,n);
}
