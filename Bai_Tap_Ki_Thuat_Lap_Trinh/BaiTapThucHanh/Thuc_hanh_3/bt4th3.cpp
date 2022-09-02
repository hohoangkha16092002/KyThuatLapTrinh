#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
void giaiPTBac2(float a, float b, float c) {
	FILE *fp=fopen("d:\\tailieuC\\ketquaPTbac2.txt","wt");
    if(a==0) {
        if(b==0){
            cout << "\nPhuong trinh vo nghiem!";
            fprintf(fp,"%s","\nPhuong trinh vo nghiem!");
        } else {
            cout << "\nPhuong trinh co mot nghiem: x =" <<(float) (-c / b);
            fprintf(fp,"%f",(float)(-c / b));
        }
        return;
    }
 	int delta = b*b - 4*a*c;
    float x1;
    float x2;
    if (delta>0){
        x1=(float)((-b + sqrt(delta)) / (2*a));
        x2=(float)((-b - sqrt(delta)) / (2*a));
        cout << "\nPhuong trinh co 2 nghiem la: " << "x1= "<< x1 << " va " <<"x2= "<< x2;
        fprintf(fp,"%s%s%f%s%s%f","\nPhuong trinh co 2 nghiem la: ","x1= ",x1," va ","x2= ",x2);
    }else
		if(delta==0){
        	x1=(float)(-b / (2 * a));
        	cout << "\nPhong trinh co nghiem kep: x1 = x2 = " <<x1;
        	fprintf(fp,"%s%f","\nPhong trinh co nghiem kep: x1 = x2 = ",x1);
    } 	else {
        	cout << "\nPhuong trinh vo nghiem!";
        	fprintf(fp,"%s","\nPhuong trinh vo nghiem!");
    }
}
void doc3So( char fname[]){
	float a,b,c;
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		while(!feof(fp)){
		fscanf(fp,"%f%f%f",&a,&b,&c);
		cout << "\nBa so vua duoc doc tu file la: "  << a << " "<< b << " "<< c;
		cout << "\nPhuong trinh bac 2 tu 3 so a b c sau khi giai la : ";
		giaiPTBac2(a,b,c);
	}
		fclose(fp);
	}
}
int main(){
	doc3So("d:\\tailieuC\\3soabc.txt");
}
	
