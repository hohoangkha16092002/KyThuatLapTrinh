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
int demsokitu( char s[]){
	int dem=0;
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
		dem++;
	}
	return dem;
}
void ghiketqua(char fname[], int dem){
FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fprintf(fp,"%s %d","\nSo ki tu chu cai cua file: ",dem);
		
	}
}
int main(){
	char s[1000];
	docdong("d:\\tailieuC\\vanbanmau.txt",s);
	cout << "\nSo ki tu chu cai cua file: "<< demsokitu(s);
	demsokitu(s);
	ghiketqua("d:\\tailieuC\\vanbanketqua.txt",demsokitu(s));
}
