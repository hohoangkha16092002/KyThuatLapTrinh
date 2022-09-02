/*Bài 3.Viết chương trình đọc 3 số nguyên a, b, c từ một tập tin, 
		sau đó giải phương trình ax2+bx+c=0 
		rồi ghi kết quả vào một tập tin khác.*/
		
#include <stdio.h>
#include <fstream>
#include <math.h>

#define fname "File/PTbac2.txt"

float a,b,c;
float x1,x2;

void ReadTextFile()
{
	FILE *fp; // Khai bao con tro file	
	int i;
	fp = fopen(fname,"r");
	if(fp == NULL) {
		printf("Khong tim thay file!");
		exit(1);
	} else {
		fscanf(fp,"%f",&a);
		fscanf(fp,"%f",&b);
		fscanf(fp,"%f",&c);
		printf("a = %.2f\nb = %.2f\nc = %.2f\n", a,b,c);
		
		fclose(fp);
	}
}

int giaiPT(float a, float b, float c,float &x1, float &x2){

    float delta = b*b - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        return 0;
    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
}


int main()
{	
	ReadTextFile();
	
	int numNo = giaiPT(a,b,c,x1,x2);
        if(numNo == 0) {
        printf("Phuong trinh da cho vo nghiem");
    }
    else if(numNo == 1){
        printf("Phuong trinh da cho co nghiem kep x=%.2f",x1);
    }
    else{
        printf("Phuong trinh da cho co hai nghiem phan biet\nx1=%.2f \nx2=%.2f",x1,x2);
    }
	
	
}