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
int main(){
	Readfile("d:\\tailieuC\\TiengThu_LuuTrongLu.txt");
	
}
