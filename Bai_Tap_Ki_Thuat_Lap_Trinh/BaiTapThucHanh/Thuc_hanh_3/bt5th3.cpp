#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
typedef struct{
	char mssv[9];
	char hoten[50];
	float dtb;
}sinhvien;
void xuatSV( sinhvien sv){
	cout << "\nMa so sinh vien: " << sv.mssv;
	cout << "\nHo va Ten sinh vien: "<< sv.hoten;
	cout << "\nDiem trung binh: "<< sv.dtb;
}
void xuatDSSV(sinhvien sv[], int n){
	cout << "\nDanh sach sinh vien: " << endl;
	for(int i=0;i<n;i++){
		cout << "\nSinh vien thu " << i+1;
		xuatSV(sv[i]);
	}
}
void docDulieu(char fname[], sinhvien sv[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%[^,],%[^,],%f\n",&sv[i].mssv,&sv[i].hoten,&sv[i].dtb);
		}
		
	}
}
void sapxepdtb(sinhvien sv[], int n){
	sinhvien temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].dtb<sv[j].dtb){
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	}
}
int main(){
	int n;
	sinhvien sv[100]; 
	docDulieu("d:\\tailieuC\\DSSVmau.txt",sv,n);
	sapxepdtb(sv,n);
	xuatDSSV(sv,n);
}
