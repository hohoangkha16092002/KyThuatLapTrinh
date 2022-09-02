#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void ReadText( char fname[],char s[]){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fgets(s,999,fp);
	}
}

void AddText(char fname[], char s[]){
	FILE *fp=fopen(fname,"at");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fputs(s,fp);
	}
}
int main(){
	char s1[1000];
	char s2[1000];
	char fname1[]="d:\\vanban.txt";
	char fname2[]="d:\\vanbankq.txt";
	ReadText(fname1,s1);
	cout << "\nVan ban thu nhat vua doc tu file la: ";
	puts(s1);
	ReadText(fname2,s2);
	cout << "\nVan ban thu hai vua doc tu file la: ";
	puts(s2);
	AddText(fname1,s2);
}
