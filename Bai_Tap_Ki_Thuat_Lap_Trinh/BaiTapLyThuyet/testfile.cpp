#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void docvanban( char fname[], char s[]){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nKhong mo dc file!!!";
	else
	{
		fgets(s,999,fp);
		fclose(fp);
		cout << "\nVan ban vua duoc doc tu file la: ";
		puts(s);
	}
}
void viethoa( char s[]){
	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]=s[i]-32;
		}
	}
}
void ghidong( char fname[], char s[]){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nKhong mo dc file!!!";
	else
	{
		fputs(s,fp);
		fclose(fp);
	}
}
int main(){
	int a,b,c;
	char s[1000];
	docvanban("d:\\tailieuC\\vanbanmau.txt",s);
	viethoa(s);
	ghidong("d:\\tailieuC\\vanbanHoa.txt",s);
	
}
