#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void saochep(char fnameGOC[], char fnameCOPY[], char s[]){
	FILE *fpG=fopen(fnameGOC,"rt");
	if(fpG==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fgets(s,900,fpG);
		FILE *fpCP=fopen(fnameCOPY,"wt");
		if(fpCP==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
		else
		{
			fputs(s,fpCP);
		}
	}
}
int main(){
	char s[1000];
	saochep("d:\\tailieuC\\vanbanmau.txt","d:\\tailieuC\\vanbanCOPY.txt",s);
}
