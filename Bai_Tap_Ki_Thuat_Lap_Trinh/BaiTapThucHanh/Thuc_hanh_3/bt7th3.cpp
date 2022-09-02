#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void Readfile( char fname[]){
	char ch;
	FILE *fp=fopen( fname,"rt");
	if(fp==NULL) cout << "\nLoi khong mo duoc FILE!!!";
	else
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			cout << ch;
		}
		fclose(fp);
	}
}
int main(int argc, char *argv[]){
	if(argc!=2){
	 cout << "\nTruyen doi so khong dung!!!";
	 }
	else{
	Readfile(argv[2]);
}
}
