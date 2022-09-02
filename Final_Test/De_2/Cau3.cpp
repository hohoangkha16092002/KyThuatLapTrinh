
//A: 5 3 1 3 3 4 6 5
//B: 1 1 5 4 3 2 1 1 <-

#include "stdio.h"
int a[100];
int n;

void ReadArray(char fname[], int a[], int &n) 
{
	FILE *fp= fopen(fname,"rt");
	if(fp==NULL) {
		printf("Khong mo dc file!\n");
	}
	else {
		fscanf(fp,"%d\n", &n);
		for(int i=0; i<n; i++)
		{
			fscanf(fp,"%d ", &a[i]);
		}
	}
}

void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int timMax(int x[100], int n){
	int max = x[0];
	for(int i=0; i<n; i++){
		if(x[i]>max)
			max = x[i];
	}
	return max;
}
void inMangConKhongGiam(int x[100], int n){
	int b[100];
	for(int i=0; i<n; i++){
		b[i]=1;
	}
	
	for(int i=n-1; i>0; i--){
		if(x[i]>=x[i-1]){
			b[i-1]=b[i]+1;
		}
	}
	printf("\nMang B: ");
	xuatMang(b, n);
	
	int soLuong = timMax(b, n);
	for(int i=0; i<n; i++){
		if(b[i]==soLuong){
			printf("\nMang khong giam dai nhat: ");
			for(int j=i; j<soLuong+i; j++)
				printf("%d ", x[j]);
		}
	}
}


int main(){
	printf("-------\n");
	
	ReadArray("D:\\HOCTAP\\Nam_2_HK1\\KyThuatLapTrinh\\Final_Test\\De_2\\input.txt",a,n);
	xuatMang(a, n);
	inMangConKhongGiam(a, n);
}