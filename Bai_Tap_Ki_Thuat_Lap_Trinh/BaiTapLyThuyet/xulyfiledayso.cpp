#include <iostream>
using namespace std;
void ReadArrayFromFile( char fname[], int a[], int &n){
	/*
	char fname[]: duong dan den tap tin
	int a[]: mang de chua cca so nguyen doc tu file
	int &n: so cac phan tu cua mang doc tu file
	*/
	FILE *fp=fopen(fname,"rt"); // mo file chi doc
	if(fp==NULL) cout << "\nKhong mo dc file!!!";
	else
	{
		// Doc so phan tu (n) tu file
		fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp, "%d", &a[i] );
		}
	}
}
void inMang(int a[], int n){
	cout << "\nSo phan tu :" << n;
	for(int i=0;i<n;i++){
		cout << " " << a[i] << " ";
	}
}
void xapXep(int a[], int n){
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
void SaveArrayToFile( char fname[], int a[], int n){
	FILE *fp=fopen(fname, "wt"); // mo file de ghi che do van an
	if(fp==NULL) cout << "\nKhong mo dc file !!!";
	else
	{
		// luu so phan tu
		fprintf(fp,"%d\n",n);
		// ghi cac phan tu vao dong so 2
		for(int i=0;i<n;i++){
			fprintf(fp," %d ", a[i]);
		}
		fclose(fp);
	}
	}
int main(){
	int a[100];
	int n;
	ReadArrayFromFile("d:\\tailieuC\\dayso.txt",a,n);
	cout << "\nMang la: ";
	inMang(a,n);
	xapXep(a,n);
	cout << "\nMang sau khi sap xep la: ";
	inMang(a,n);
	SaveArrayToFile("d:\\tailieuC\\luudayso.txt",a,n);
}
