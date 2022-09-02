#include<iostream>
#include<stdio.h>
using namespace std;
void ghiText(char fname[],char s[] ) {
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi";
	else
	{
		fprintf(fp,"%s",s);
		
	}
}
int main(){
	char s[1000]; // khai bao dung chua??
	char fname[]="d:\\vanban.txt";
	cout << "\nNhap chuoi: ";
	fgets(s,999,stdin);
	cout << "\nChuoi vua nhap la: ";
	cout << s; 
	ghiText(fname,s);
	
}
