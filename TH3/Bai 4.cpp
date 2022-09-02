/*
Bài 4. Cho một file văn bản gồm nhiều dòng, 
mỗi dòng chứa 3 số thực (cách nhau bởi khoảng trắng) 
tương ứng với 3 hệ số a, b, c của phương trình ax2+bx+c=0.
*/

#include <stdio.h>
#include <fstream>
#include <math.h>

#define fname "File/PTbac2.txt"

float a,b,c;
float x1,x2;

void giaiPT(float a, float b, float c){
	
	int out;
	if (a == 0) {
        if (b == 0) {
        	if(c == 0){
        		printf("Vo so nghiem!\n");
            	out = 1;	
			} else
		        printf("Vo nghiem!\n");
		        out = 1;
		} else {
	        printf("Nghiem kep: x = %f\n", (-c / b));
	        out = 1;
	    }
    }
	
    float delta = b*b - 4*a*c;
    
    if(out != 1){
	    if (delta > 0) {
	        x1 = (float) ((-b + sqrt(delta)) / (2*a));
	        x2 = (float) ((-b - sqrt(delta)) / (2*a));
	        printf("x1 = %.2f  x2 = %.2f\n",x1,x2);
	    } else if (delta == 0) {
	        x1 = (-b / (2 * a));
	        printf("Nghiem kep x = %.2f\n",x1);
	    } else {
	        printf("Vo nghiem\n");
	    }
	} 
}

void ReadTextFile()
{
	FILE *fp; // Khai bao con tro file	
	int i;
	fp = fopen(fname,"r");
	if(fp == NULL) {
		printf("Khong tim thay file!");
		exit(1);
	} else {
		while(!feof(fp)) 
		{
			fscanf(fp,"%f",&a);
			fscanf(fp,"%f",&b);
			fscanf(fp,"%f",&c);
			
			printf("%.2f x^2 + %.2f x + %.2f\t", a,b,c);
			giaiPT(a, b, c);
		}
		fclose(fp);
	}
}



int main()
{	
	ReadTextFile();
}
