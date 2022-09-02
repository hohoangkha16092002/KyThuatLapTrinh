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
void uthanhU( char s[]){
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]>='a' &&s[i]<='z'){
			s[i]=s[i]-32;
		}
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
	docdong("d:\\tailieuC\\vanbanmau.txt",s);
	uthanhU(s);
	cout << "\nVan ban sau khi cac chu thuong doi thanh chu hoa la: " << s;
	ghidong("d:\\tailieuC\\vanbanHoa.txt",s);
}
