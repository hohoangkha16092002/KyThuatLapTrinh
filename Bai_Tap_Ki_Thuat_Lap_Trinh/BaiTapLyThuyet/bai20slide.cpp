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
int demsotu( char s[]){
	int dem=0;
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			dem++;
		}
	}
	return dem+1;
}
void ghiketqua(char fname[], int dem){
FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fprintf(fp,"%s %d","So tu co trong van ban cua file: ",dem);
		fclose(fp);
	}
}
int main(){
	char s[1000];
	docdong("d:\\tailieuC\\vanbanmau.txt",s);
	cout << "\nSo ki tu chu cai cua file: "<< demsotu(s);
	demsotu(s);
	ghiketqua("d:\\tailieuC\\vanbanketqua2.txt",demsotu(s));
}
