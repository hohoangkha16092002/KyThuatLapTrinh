#include<stdio.h>
#include<iostream>
using namespace std;
void docdong( char fname[],char s[]){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fgets(s,999,fp);
		cout << "\nDong van ban doc duoc tu file la: " << s;
		
	}
}
int main(){
	char s[1000];
	docdong("d:\\tailieuC\\vanbanmauAnsi.txt",s);
}
