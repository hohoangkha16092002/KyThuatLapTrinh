#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void nhapMang( int a[], int &n ){
	cout << "\nNhap vao so luong phan tu: ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "\nNhap vao phan tu thu " << i+1 <<" " ;
		cin >> a[i];
	}
}
void xuatMang(int a[], int n){
	cout << "\nMang la: ";
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
}
int snt(int n){
	int dem=0;
    for (int i = 1; i <=n ; ++i) {
        if (n%i==0) dem++;
    }
    if (dem==2) return 1; else return 0;
}
void inSnt( int a[], int n){
	cout << "\nNhung so nguyen to cua mang la: ";
	for(int i=0;i<n;i++){
		if(snt(a[i])==1) cout << a[i] << " ";
	}
}
int ktcp(int n){
    int temp=(int)sqrt(n);
    if (temp*temp==n) return 1; else return 0;
}
void inScp( int a[], int n){
	cout << "\nNhung so chinh phuong cua mang la: ";
	for(int i=0;i<n;i++){
		if(ktcp(a[i])==1) cout << a[i] << " ";
	}
}
float gtTb(int a[], int n){
	int tong=0;
	int dem=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
		dem++;
	}
	return (float)tong/dem;
}
void inSlhTb( int a[], int n){
	cout << "\nNhung so co gia tri lon hon gia tri trung binh cua mang la: ";
	for(int i=0;i<n;i++){
		if(a[i]>gtTb(a,n)) cout << a[i] << " ";
	}
}
int maxMang(int a[], int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	return max;
}
bool ktTD(int a[], int n) {
    int dem= 0;
    for (int i=0;i<n-1;i++)
    {
        if (a[i+1]>=a[i]) dem++;
    }
    if (dem==n-1) return true;
    else return false;
}
void xapXepTangDan(int a[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
}
 
void xapXepGiamDan(int a[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
}
int main(){
	int a[50];
	int n;
	nhapMang(a,n);
	xuatMang(a,n);
	inSnt(a,n);
	inScp(a,n);
	cout << "\nGia tri trung binh cua mang la: " << gtTb(a,n);
	inSlhTb(a,n);
	cout << "\nGia tri lon nhat cua mang la: " << maxMang(a,n);
	if(ktTD(a,n)) cout <<"\nMang tang dan";
	else cout << "\nMang khong tang dan";
	xapXepTangDan(a,n);
	cout << "\nMang sau khi sap xep tang dan la: ";
	xuatMang(a,n);
	xapXepGiamDan(a,n);
	cout << "\nMang sau khi sap xep giam dan la: ";
	xuatMang(a,n);
	return 0;
}
