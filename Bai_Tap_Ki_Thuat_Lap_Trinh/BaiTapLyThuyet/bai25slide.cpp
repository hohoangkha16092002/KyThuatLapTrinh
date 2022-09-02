#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
typedef struct{
	char mssv[9];
	char hoten[50];
	float dtb;
}sinhvien;
void nhapSV( sinhvien &sv){
	fflush(stdin);
	cout << "\nMa so sinh vien: ";
	gets(sv.mssv);
	cout << "\nHo va Ten sinh vien:";
	gets(sv.hoten);
	cout << "\nDiem trung binh: ";
	cin >> sv.dtb;
	}
void xuatSV( sinhvien sv){
	cout << "\nMa so sinh vien: " << sv.mssv;
	cout << "\nHo va Ten sinh vien: "<< sv.hoten;
	cout << "\nDiem trung binh: "<< sv.dtb;
}
void nhapDSSV( sinhvien sv[], int &n){
	cout << "\nNhap vao so luong sinh vien: ";
	cin >> n;
	for( int i=0;i<n;i++){
		cout << "\nNhap vao thong tin sinh vien thu " << i+1;
		nhapSV(sv[i]);
	}
}
void xuatDSSV(sinhvien sv[], int n){
	cout << "\nDanh sach sinh vien: " << endl;
	for(int i=0;i<n;i++){
		cout << "\nSinh vien thu " << i+1;
		xuatSV(sv[i]);
	}
}
void ghiDulieu(char fname[],sinhvien sv[],int n){
	FILE *fp=fopen( fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++){
			fprintf(fp,"%s \t %s \t %f\n",sv[i].mssv,sv[i].hoten,sv[i].dtb);
		}
		fclose(fp);
	}
}
void docDulieu(char fname[], sinhvien sv[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	
	fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%[^\t]\t%[^\t]\t%f",&sv[i].mssv,&sv[i].hoten,&sv[i].dtb);
		}
		
	}
}
int main(){
	int n,m;
	sinhvien sv[100]; 
	sinhvien sv1[100];
	nhapDSSV(sv,n);
	xuatDSSV(sv,n);
	ghiDulieu("d:\\tailieuC\\DSSV.txt",sv,n);
	docDulieu("d:\\tailieuC\\DSSVmau.txt",sv1,m);
	xuatDSSV(sv1,m);
}
