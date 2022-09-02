#include<iostream>
#include<stdio.h>
using namespace std;
int tongS1(int n){
	int tong=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0) tong+=-i;
		else tong+=i;
	}
	return tong;
}
int tongS2(int n){
	if(n==0) return 0;
	else
	{
		if(n%2!=0) return -n+tongS2(n-1);
		else return n+tongS2(n-1);
	}
}
int main(){
	int n;
	do{
	cout << "\nNhap vao so nguyen N>0: ";
	cin >> n;
	if(n<=0) cout << "\nNhap N sai yeu cau!!! Hay nhap lai";
	}
	while(n<=0);
	cout << "\nKet qua cua tong khi khong su dung de quy la: " << tongS1(n);
	cout << "\nKet qua cua tong khi su dung de quy la: " << tongS2(n);
}
