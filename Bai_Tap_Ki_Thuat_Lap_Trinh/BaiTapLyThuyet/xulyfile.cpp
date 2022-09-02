#include<stdio.h>
#include<math.h>
void GiaiPTBac2( float a, float b, float c){
	float d;
	if(a==0)
		if(b==0)
			if(c==0)
				printf("Vo so nghiem\n");
			else
				printf("so nghiem\n");
		else
			printf("x=%f\n",-c/b);
	else
		float d =b*b-4*a*c;
		if(d<0) printf("Vo so nghiem\n");
		if(d==0) printf("Co nghiem kep x= %f\n",-b/(2*a));
		if(d>0){
			float x1=(-b+sqrt(d)/(a*2));
			float x2=(-b-sqrt(d)/(a*2));
			printf("Phuong trinh co 2 nghiem x1= %f va x2= %f\n",x1,x2);
		}
}
int main(){
	FILE *fp=fopen("D:\\tailieuC\\3soabc.txt","rt");
	if(fp==NULL){
		printf("\nKhong tim thay file");
	}
	else 
		{
			while(!feof(fp)){
				float a,b,c;
				fscanf(fp,"%f%f%f",&a,&b,&c);
				printf("%f\t%f\t%f\n",a,b,c);
				GiaiPTBac2(a,b,c);
			}
			fclose(fp);
		}
}
