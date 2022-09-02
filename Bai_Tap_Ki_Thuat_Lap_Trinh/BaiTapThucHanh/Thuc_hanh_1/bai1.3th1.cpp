#include<iostream>
#include<stdio.h>
#define max 100
using namespace std;
void nhapMatran(int a[][max], int &m, int &n){
	cout << "\nNhap vao so hang va so cot cua Ma Tran: ";
	cin >> m >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << "\nNhap vao phan tu a" << "[" << i << "][" << j << "] ";
			cin >> a[i][j];
		}
	}
}
void xuatMatran(int a[][max], int m, int n){
	cout << "\nMa tran la: \n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << "  "<< a[i][j] << "  ";
		}
		cout << "\n";
	}
}
float tbcMatran(int a[][max], int m, int n){
	int tong=0;
	int dem=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tong+=a[i][j];
			dem++;
		}
	}
	return (float) tong/dem;
}
int maxMatran(int a[][max], int m, int n){
	int maxm=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>maxm) maxm=a[i][j];
		}
	}
	return maxm;
}
int maxdongi(int a[][max], int m, int n, int sodong){
	int maxd=a[sodong][0];
	for(int i=0;i<n;i++){
		if(a[sodong][i]>maxd) maxd=a[sodong][i];
	}
	return maxd;
}
int maxcoti(int a[][max], int m, int n, int socot){
	int maxc=a[0][socot];
	for(int i=0;i<m;i++){
		if(a[i][socot]>maxc) maxc=a[i][socot];
	}
	return maxc;
}
int snt(int n){
	int dem=0;
    for (int i = 1; i <=n ; ++i) {
        if (n%i==0) dem++;
    }
    if (dem==2) return 1; else return 0;
}
int demsnt(int a[][max],int m,int n){
	int dem=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(snt(a[i][j])==1) dem++;
		}
	}
	return dem;
}
void dongTD(int a[][max], int m, int n){
   for(int k=0;k<m;k++){
      for(int i=0;i<n-1;i++){
	  	for(int j=n-1;j>i;j--){
      		if(a[k][j]<a[k][j-1]){
		        int temp = a[k][j];
		        a[k][j] = a[k][j-1];
		        a[k][j-1] = temp;
		    }
      }
}
}
}
int main(){
	int a[max][max];
	int m,n;
	int sodong,socot;
	nhapMatran(a,m,n);
	xuatMatran(a,m,n);
	cout << "\nTrung binh cong cua Ma Tran la: " << tbcMatran(a,m,n);
	cout << "\nPhan tu lon nhat cua Ma Tran la: " << maxMatran(a,m,n);
	cout <<"\nMuon tim phan tu lon nhat tren dong nao??? ";
	cin >> sodong;
	cout << "\nPhan tu lon nhat dong " << sodong << " la: "<< maxdongi(a,m,n,sodong);
	cout <<"\nMuon tim phan tu lon nhat tren cot nao??? ";
	cin >> socot;
	cout << "\nPhan tu lon nhat cot " << socot << " la: "<< maxcoti(a,m,n,socot);
	cout << "\nSo phan tu la so nguyen to co trong Ma Tran la: " << demsnt(a,m,n);
	dongTD(a,m,n);
	cout << "\nMa tran sau khi sap xep tang dan theo dong la: ";
	xuatMatran(a,m,n);
	
	
}
