#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
//void WriteNumber(char fname[], int a, int b, int c){
//	FILE *fp=fopen(fname,"wt");
//	if(fp==NULL) cout << "\nKhong mo File!!!";
//	else
//	{
//		fprintf(fp,"%d %d %d",a,b,c);
//	}
//}
void ReadNumber(char fname[],int &a, int &b, int &c){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nKhong mo File!!!";
	else
	{
		fscanf(fp,"%d %d %d",&a,&b,&c);
	}
}
void giaiPTBac2(int a, int b, int c) {
	FILE *fp=fopen("d:\\ketquaPTbac2.txt","wt");
    if(a==0) {
        if(b==0){
            cout << "\nPhuong trinh vo nghiem!";
            fprintf(fp,"%s","\nPhuong trinh vo nghiem!");
        } else {
            cout << "\nPhuong trinh co mot nghiem: x =" <<(float) (-c / b);
            fprintf(fp,"%f",(float)(-c / b));
        }
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
int main(){
	int a,b,c;
	char fname[]="d:\\3soabc.txt";
	//WriteNumber(fname,a,b,c);
	ReadNumber(fname,a,b,c);
	cout << "\nBa so a b c doc tu File la: " << a <<" "<< b << " "<< c;
	giaiPTBac2(a,b,c);
}

