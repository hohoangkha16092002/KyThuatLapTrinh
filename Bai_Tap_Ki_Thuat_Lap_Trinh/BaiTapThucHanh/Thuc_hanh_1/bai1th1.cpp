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
int timSV(sinhvien sv[],int n, char msct[]){
	for(int i=0;i<n;i++){
		if(strcmp(msct,sv[i].mssv)==0) return i;
		}
	return -1;
	}
void themSV(sinhvien sv[], int &n,sinhvien sv1){
	
		for(int i=n;i>n;i--){
			sv[i].dtb=sv[i-1].dtb;
			strcpy(sv[i].mssv,sv[i-1].mssv);
			strcpy(sv[i].hoten,sv[i-1].hoten);
		}
		sv[n]=sv1;
		n++;
		
		
		
}

void xoa(sinhvien sv[], int &n,int vt){
	{
		for( int i=vt;i<n-1;i++){
			sv[i]=sv[i+1];
		}
		n--;
	}
}
void xoaSV(sinhvien sv[], int &n, char msmx[]){
	for(int i=0;i<n;i++){
		if(strcmp(msmx,sv[i].mssv)==0){
			xoa(sv,n,i);
			break;
			i--;
		}
		else cout << "\nMa so sinh vien khong ton tai";
			break;
	}
	
}
void SapXep(sinhvien sv[], int n, bool sxTang=false)
{
    for(int i=0; i < n-1; i++)
        for(int j=i+1; j < n; j++)
            if(sxTang)
            {
                if(sv[i].dtb > sv[j].dtb)
                {
                    sinhvien t = sv[i]; 
					sv[i] = sv[j]; 
					sv[j] =  t;
                }
            }
            else {
                if (sv[i].dtb < sv[j].dtb) {
                    sinhvien t = sv[i];
                    sv[i] = sv[j];
                    sv[j] = t;
                }
            }
}
int main(){
	int n,vt,vt2;
	char msct[9];
	char msmx[9];
	sinhvien sv[100];
	sinhvien sv1;
	nhapDSSV(sv,n);
	xuatDSSV(sv,n);
//	fflush(stdin);
//	cout << "\nNhap vao Ma so sinh vien can tim: ";
//	gets(msct);
//	vt=timSV(sv,n,msct);
//	if(vt>=0){
//		cout << "\nSinh vien co ma so can tim la: ";
//		xuatSV(sv[vt]);
//	}
//	else
//		cout << "\nKhong tim thay sinh vien co ma so can tim";
//	fflush(stdin);
//	cout << "\nNhap vao thong tin sinh vien muon them";
//	nhapSV(sv1);
//	themSV(sv,n,sv1);
//	xuatDSSV(sv,n);
	fflush(stdin);
	cout << "\nNhap vao Ma so sinh vien muon xoa: ";
	gets(msmx);
	xoaSV(sv,n,msmx);
//	SapXep(sv,n, true);
//    cout << "\nDanh sach sinh vien sau khi sap xep:" << endl;
	xuatDSSV(sv, n);
	
}
