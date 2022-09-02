#include<stdio.h>
typedef struct{
	char mssv[9];
	char hoten[50];
	float dtb;
}sinhvien;
void DocDSSV(sinhvien sv[], int &soSV){
	soSV=0;
	FILE *fp= fopen("D:\\C\\dssv.txt","rt");
	if(fp==NULL){
		printf("Khong tim duoc FILE!!!");
	}
	else {
		while(!feof(fp))
		{
			fscanf(fp,"%[^\t]\t%[^\t]\t%f", &sv[soSV].mssv,&sv[soSV].hoten,&sv[soSV].dtb);
			soSV++;
		}
		fclose(fp);
		printf("Doc File thanh cong !!!\n");
	}
}
void inDSSV( sinhvien sv[], int n){
	for(int i=0;i<n;i++){
		printf("%s \t %s \t %f \n",sv[i].mssv,sv[i].hoten,sv[i].dtb);
	}
}
int main(){
	sinhvien sv[10];
	int n;
	DocDSSV(sv,n);
	inDSSV(sv,n);
}
