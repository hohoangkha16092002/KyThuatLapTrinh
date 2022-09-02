#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int sohangfibo1( int n){
	int f1=1;
	int f2=1;
	int fn;
	if(n==1||n==2) return 1;
	for(int i=3;i<=n;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	return fn;
}
int sohangfibo2( int n){
	if(n==1||n==2) return 1;
	return sohangfibo2(n-1)+sohangfibo2(n-2);
}
int main(){
	int n;
	cout << "\nNhap vao so hang can tim: ";
	cin >> n;
	cout << "\nGia tri la: " << sohangfibo1(n);
	cout << "\nGia tri la: " << sohangfibo2(n);
}
