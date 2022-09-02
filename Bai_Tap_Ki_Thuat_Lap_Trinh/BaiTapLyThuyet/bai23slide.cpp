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
void ghidong(char fname[], char s[]){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fputs(s,fp);
		fclose(fp);
	}
}
int main(){
	char s[1000];
	char a[1000];
	docdong("d:\\tailieuC\\vanbanmau.txt",s);
	docdong("d:\\tailieuC\\vanbanmau2.txt",a);
	strcat(s," ");
	strcat(s,a);
	cout << "\nChuoi sau khi ghep duoc la: " << s;
	ghidong("d:\\tailieuC\\vanbanGHEP.txt",s);
}
