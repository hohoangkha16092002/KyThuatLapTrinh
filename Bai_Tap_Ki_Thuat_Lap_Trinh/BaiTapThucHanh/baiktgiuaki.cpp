#include<iostream>
#include<stdio.h>
#define max 100
#include<math.h>
using namespace std;
void nhapMang(int a[], int &n){
	do{
		cout << "\nNhap vao so luong phan tu cua mang: ";
		cin >> n;
		if(n<3|| n>100) cout << "\nBan nhap n sai theo yeu cau the!!!";
	}
	while(n<3||n>100);
	for(int i=0;i<n;i++){
		cout << "\nNhap vao phan tu thu "<< i+1 << ": ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout << " " << a[i] << " ";
	}
}
int laSNT(int n){
	int dem=0;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
void inSNT(int a[], int n){
	cout << "\nCac so nguyen to co trong mang la:" << endl;
	for(int i=0;i<n;i++){
		if(laSNT(a[i])==1) cout << " "<< a[i];
	}
}
int maxSNT(int a[], int n){
	int dem=0;
	int maxc;
	for(int i=0;i<n;i++){
		if(laSNT(a[i])==1) dem++;
	}
	if(dem>0){
		for(int i=0;i<n;i++){
			if(laSNT(a[i])==1&&a[i]>=maxc) maxc=a[i];
		}
	}
	else return 0;
	return maxc;
}
int maxMang(int a[], int n){
	int maxd=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>=maxd) maxd=a[i];
	}
	return maxd;
}
void xoaPhanTu(int a[], int &n, int i){
	if(i>=0&&i<n){
	for(int j=i;j<n-1;j++){
		a[j]=a[j+1];
	}
	n--;
}
}
void xoaMax(int a[], int &n){
	for(int i=0;i<n;i++){
		if(a[i]==maxMang(a,n)){
		xoaPhanTu(a,n,i);
		i--;
		}
	}
}
void tachMang(int a[], int n, int mangChan[], int &nChan, int mangLe[], int &nLe){
	nChan=0;
	nLe=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			mangChan[nChan]=a[i];
			nChan++;
		}
		else{
			mangLe[nLe]=a[i];
			nLe++;
		}
	}
}
int main(){
	int a[max];
	int mangChan[max];
	int mangLe[max];
	int n,nChan,nLe;
	nhapMang(a,n);
	cout <<"\nMang la: ";
	xuatMang(a,n);
//	inSNT(a,n);
//	if(maxSNT(a,n)==0) cout << "\nMang khong co so nguyen to";
//	else cout << "\nSo nguyen to lon nhat trong mang la: "<< maxSNT(a,n);
//	cout << "\nPhan tu lon nhat trong mang la: " << maxMang(a,n);
//	xoaMax(a,n);
//	cout << "\nMang sau khi xoa Max la: ";
//	xuatMang(a,n);
//	tachMang(a,n,mangChan,nChan,mangLe,nLe);
//	cout << "\nMang Chan sau khi tach ra duoc la: ";
//	xuatMang(mangChan,nChan);
//	cout << "\nMang Le sau khi tach ra duoc la: ";
//	xuatMang(mangLe,nLe);
	
}
