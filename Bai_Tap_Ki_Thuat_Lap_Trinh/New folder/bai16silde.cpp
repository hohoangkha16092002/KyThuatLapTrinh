#include<iostream>
#include<stdio.h>
using namespace std;
void ReadArray( char fname[], int a[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout <<  "\nLoi";
	else
	{
		fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%d",&a[i]);
		}
	}
}
void Xuatmang( int a[], int n){
	cout << "\nSo luong phan tu: " << n;
	cout << "\nMang la: ";
	for( int i=0;i<n;i++){
		cout << " " << a[i];
	}
}
void sapXep( int a[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
// lam ham ghi mang vao file
void ghiArray(char fname[], int a[], int n){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi";
	else
	{
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++){
			fprintf(fp,"%d ",a[i]);
		}
	}
}
int main(){
	int a[100]; //khai bao dung chua
	int n;
	char fname[]="d:\\dayso.txt";
	char fnamo[]="d:\\daysosapxep.txt";
	ReadArray(fname,a,n);
	Xuatmang(a,n);
	sapXep(a,n);
	Xuatmang(a,n);
	ghiArray(fnamo,a,n);
}
