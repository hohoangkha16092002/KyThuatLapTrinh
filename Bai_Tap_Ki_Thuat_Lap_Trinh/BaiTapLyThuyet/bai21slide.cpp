#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void docdong( char fname[],char s[]){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fgets(s,1000,fp);
		cout << "\nDong van ban doc duoc tu file la: " << s;
		
	}
}
int solanXH(char s[], char a){
	int dem=0;
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]==a){
			dem++;
		}
	}
	return dem;
}
int main(){
	char s[1000];
	char a;
	docdong("d:\\tailieuC\\vanbanmau.txt",s);
	cout << "\nNhap vao Ki tu muon biet so lan xuat hien: ";
	cin >> a;
	cout << "\nSo lan tu " << a << " xuat hien la: " <<solanXH(s,a);
}
