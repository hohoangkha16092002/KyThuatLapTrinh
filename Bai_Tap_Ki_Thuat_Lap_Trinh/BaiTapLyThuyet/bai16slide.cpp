#include<stdio.h>
#include<iostream>
using namespace std;
void docNso( char fname[], int a[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%d",&a[i]);
		}
	}
}
void xuatMang(int a[], int n){
	cout << "\nSo phan tu la: " << n <<"\n";
	for(int i=0;i<n;i++){
		cout << " "<< a[i] << " ";
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
void ghiNso( char fname[], int a[], int n){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++){
			fprintf(fp," %d ",a[i]);
		}
		fclose(fp);
	}
}
int main(){
	int a[100];
	int n;
	docNso("d:\\tailieuC\\dayso.txt",a,n);
	cout << "\nDay so sau khi doc tu file la: ";
	xuatMang(a,n);
	sapXep(a,n);
	cout << "\nDay so sau khi sap xep tang dan la: ";
	xuatMang(a,n);
	ghiNso("d:\\tailieuC\\luudayso.txt",a,n);
}
