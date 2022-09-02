#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int filesize(char fname[])
{	FILE *fp=fopen( fname,"rt");
	if(fp==NULL) cout << "\nLoi khong mo duoc FILE!!!";
	else{
    fseek(fp, 0, SEEK_END); 
    return ftell(fp);
	}
}
int main(){
	cout <<"\nKich thuot cua tap tin la: "	<< filesize("d:\\tailieuC\\TiengThu_LuuTrongLu.txt");
	
}
