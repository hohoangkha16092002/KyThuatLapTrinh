#include<iostream>
using namespace std;
void ReadArray(char fname[], int a[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong tim thay file!!!";
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
int maxArray(int a[], int n){
	int max=a[0];
	for(int i=1; i<n;i++){
		if(a[i]>max) max=a[i];
	}
	return max;
}
void chenX(int a[], int &n, int x, int k){
	for(int i=n;i>=k;i--){
 		a[i]=a[i-1];
		 }
 	a[k]=x;
 	n++;
}
void chenXmax(int a[], int &n, int x){
	for(int i=0;i<n;i++){
		if(a[i]==maxArray(a,n)) chenX(a,n,x,i);
	}
}
int main(){
	int a[100];
	int n,x;
	char fname[]="d:\\dayso.txt";
	ReadArray(fname,a,n);
	cout << "\nMang vua duoc doc tu file la: ";
	xuatMang(a,n);
	cout << "\nNhap so X muon chen vao: ";
	cin >> x;
	chenXmax(a,n,x);
	xuatMang(a,n);
}
	
	

