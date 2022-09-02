#include<stdio.h>
#include<iostream>
using namespace std;
void ghi3So( char fname[]){
	int a,b,c;
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		cout << "\nNhap vao ba so a, b, c: ";
		cin >> a >> b >> c;
		fprintf(fp,"%d\n%d\n%d",a,b,c);
		fclose(fp);
	}
}
int main(){
	int a,b,c;
	ghi3So("d:\\tailieuC\\3soabc.txt");
}
