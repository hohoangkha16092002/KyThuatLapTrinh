#include<stdio.h>
#include<iostream>
using namespace std;
void ghidong(char fname[], char s[]){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		cout << "\nNhap vao dong van ban: ";
		gets(s);
		fputs(s,fp);
		fclose(fp);
	}
}
int main(){
	char s[1000];
	ghidong("d:\\tailieuC\\luudongvanban2.txt",s);
}
