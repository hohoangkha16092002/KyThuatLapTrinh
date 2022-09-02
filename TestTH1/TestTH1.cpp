/*
a) (2đ) Viết hàm nhập ma trận theo khuôn mẫu:
NhapMT(m2c a, int &sohang, int &socot)
Trong đó m2c là kiểu ma trận tự định nghĩa: typedef int m2c[10][10];

b) (2đ) Viết hàm xuất ma trận theo khuôn mẫu:
XuatMT(m2c a, int sohang, int socot)

c) Viết hàm theo khuôn mẫu int laSoCP(int n) kiểm tra một số tự nhiên có phải số chính
phương không. (1đ)
Trong chương trình chính sử dụng hàm này để đếm số lượng số chính phương trong ma trận.
(1đ)
d) Viết hàm trả về tổng các phần tử trên một cột của ma trận. (1đ)
Trong chương trình chính sử dụng hàm này để tìm cột có tổng lớn nhất. (1đ)

e) Chương trình chính thực hiện các yêu cầu trên. (2đ) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ARRAY_SIZE 20
#define MAX_ELEMENT 50

typedef int m2c[10][10];

void NhapMT(m2c a, int &sohang, int &socot) {
    printf("Nhap so hang:");
    scanf("%d", &sohang);
    printf("Nhap so cot:");
    scanf("%d", &socot);    

    for(int i=0; i < sohang; i++)   
        for(int j=0; j < socot; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMT(m2c a, int sohang, int socot) {
    for(int i=0; i < sohang; i++)
    {
        for(int j=0; j < socot; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

int laSoCP(int n)
{
	int a = sqrt(n);
	if (a * a == n)
		return 1;
	else
		return 0;
}

int Tong_cot_j(m2c a, int sohang, int socot, int j){
    
    int tong=a[0][j];
    for(int i=1;i<sohang;i++){
        tong+=a[i][j];
	}            
    return tong;
}

int main () {
	m2c a;
    int sohang,socot,cot;
    
    NhapMT(a, sohang, socot);
    
    int demcp=0;
    for(int i=0; i < sohang; i++)
    {
    	
        {
            for(int j=0; j < socot; j++)
                if (laSoCP(a[i][j]))
                demcp++;
        }
    }
    printf("So luong so chinh phuong trong ma tran la: %d\n",demcp);
    
	int max = Tong_cot_j(a, sohang, socot, 0);
	int flag;
	int j;
    {
        for(j=0; j < sohang; j++){
		
            if (Tong_cot_j(a, sohang, socot, j)>max)
            {
				max = Tong_cot_j(a, sohang, socot, j);
				flag = j;
			}
		}
		printf ("Cot co tong lon nhat la %d voi tong la: %d\n",j,max);
    }
    
    XuatMT(a, sohang, socot);
}
