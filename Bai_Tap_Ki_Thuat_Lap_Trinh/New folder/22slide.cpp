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
void vietHoa( char s[]){
	for(int i=0;i<=strlen(s)-1;i++){
		if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;
	}
}
void WriteText(char fname[], char s[]){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fputs(s,fp);
	}
}
int main(){
	char s[1000];
	char fname[]="d:\\vanban.txt";
	char fname1[]="d:\\vanbankq.txt";
	ReadText(fname,s);
	cout << "\nVan ban vua doc tu file la: ";
	puts(s);
	vietHoa(s);
	cout << "\nVan ban sau khi viet hoa la: ";
	puts(s);
	WriteText(fname1,s);
	
}
