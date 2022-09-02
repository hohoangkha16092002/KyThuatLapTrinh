#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
struct Sinhvien{
	int mssv;
	char hoten[30];
	int gioitinh;
	float dtb;
};
void docDSSV(char fname[], Sinhvien sv[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%d, %[^,], %d, %f\n",&sv[i].mssv,&sv[i].hoten,&sv[i].gioitinh,&sv[i].dtb);
		}
		
	}
}
void xuatDSSV(Sinhvien sv[], int n){
	cout << "\nDanh sach sinh vien: " << endl;
	for(int i=0;i<n;i++){
		if(sv[i].gioitinh==0) cout << sv[i].mssv <<", "<< sv[i].hoten << ", "<< "Nam"<< ", "<< sv[i].dtb << endl;
		else cout << sv[i].mssv << ", "<< sv[i].hoten <<", "<< "Nu"<< ", "<< sv[i].dtb << endl;
	}
}
void indskhoa(Sinhvien sv[], int n, int k){
	cout << "\nDanh sach sinh vien khoa " << k << " la: " << endl;
	for(int i=0;i<n;i++){
		if(sv[i].mssv>=k*1000000 && sv[i].mssv<=(k*1000000+999999)) cout << sv[i].mssv <<", "<< sv[i].hoten << ", "<< sv[i].gioitinh<< ", "<< sv[i].dtb << endl;
	}
}
void ghiDulieu(char fname[],Sinhvien sv[],int n){
	FILE *fp=fopen( fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++){
			fprintf(fp,"%d, %s, %d, %.2f\n",sv[i].mssv,sv[i].hoten,sv[i].gioitinh,sv[i].dtb);
		}
		fclose(fp);
	}
}
void sapxep(Sinhvien sv[], int n){
    Sinhvien temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sv[i].mssv > sv[j].mssv){
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}
int main(){
	int n;
	Sinhvien sv[100];
	char fname[]="d:\\sinhvien.txt";
	char fname2[]="d:\\dssinhvien.txt";
	docDSSV(fname,sv,n);
	xuatDSSV(sv,n);
	indskhoa(sv,n,62);
//	sapxep(sv,n);
//	xuatDSSV(sv,n);
//	ghiDulieu(fname2,sv,n);
}
