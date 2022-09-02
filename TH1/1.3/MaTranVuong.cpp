/*
Minh họa xử lý mảng 2 chiều.
Viết chương trình (mỗi chức năng cài đặt thành một hàm):
a) Nhập ma trận kích thước mxn phần tử là số nguyên.
b) In ra ma trận vừa nhập
c) Tìm phần tử lớn nhất trên toàn ma trận.
d) Kiểm tra tất cả các phần tử của ma trận có phải SNT?
e) Viết hàm tính tổng các phần tử trên 1 dòng của ma trận.
f) Tính tổng phần tử của toàn bộ ma trận, sử dụng hàm ở câu e.
g) Sắp xếp ma trận sao cho trên mỗi dòng các phần tử tăng dần.
*/

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 20
#define MAX_ELEMENT 50

typedef int matran[ARRAY_SIZE][ARRAY_SIZE];
void TaoMT(matran a, int &m, int &n);
void NhapMT(matran a, int &m, int &n);
void XuatMT(matran a, int m, int n);
int AverageMT(matran a, int m, int n);
void Max_hang_i(matran , int m, int n);
void Max_cot_j(matran , int m, int n);
int MaxMT(matran a, int m, int n);
int LaSNT(int n);                    
int DemSNT(matran a, int m, int n);  
void SapXepMT(matran a, int m, int n); 

/////////////////////////////////////////////////////////////////////
int main()
{
    matran a;
    int m,n;
    
    NhapMT(a, m, n);
    XuatMT(a, m, n);
    // In ra trung bình cộng của ma trận
    printf("Trung binh cong cua ma tran = %d\n", AverageMT(a, m, n));

    // In ra phần tử lớn nhất của ma trận
    printf("Phan tu lon nhat ma tran = %d\n", MaxMT(a, m, n));

	// In ra phần tử lớn nhất trên dòng i của ma trận (0 <=  i < m);
	Max_hang_i(a,m,n);
	
	// In ra phần tử lớn nhất trên cột của ma trận (0 <= j < n);
	Max_cot_j(a,m,n);
	
    // Đếm số phần tử là số nguyên tố của ma trận
	printf("So phan tu la so nguyen to cua ma tran = %d\n", DemSNT(a, m, n));
	
    // Sắp xếp ma trận mỗi hàng tăng dần
    SapXepMT(a, m, n);
    // In ra ma trận sau khi sắp xếp
    printf("\nMa tran sau khi sap xep:\n");
    XuatMT(a,m,n);
}

/////////////////////////////////////////////////////////////////////
// Nhập ma trận từ bàn phím
void NhapMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    
    
    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
}

// Xuất ma trận
void XuatMT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
    {
        {
            for(int j=0; j < n; j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
    }
}

// Tính trung bình cộng của ma trận;
int AverageMT(matran a, int m, int n)
{
	int tong=0;
	for(int i=0; i < m; i++)
    {
        {
            for(int j=0; j < n; j++)
                tong+=a[i][j];
        }
    }
    int TBC = tong / (m*n); 
    return TBC;
}

/* Hàm trả về phần tử lớn nhất của ma trận
Cách giải quyết:
- Gán phần tử max = a[0][0]
- Lần lượt so sánh max với các phần tử còn lại, 
nếu phần tử nào > max thì gán max bằng phần tử đó.
*/
int MaxMT(matran a, int m, int n)
{
    int max = a[0][0];
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

// Tìm phần tử lớn nhất trên dòng i của ma trận (0 <=  i < m);
void Max_hang_i(matran a, int m, int n){
    for(int i=0;i<m;i++)
 	{
            int max=a[i][0];
            for(int j=1;j<n;j++){
            	if(a[i][j]>max)
            	{
            		max=a[i][j];
				}
			}            
            printf("Phan tu lon nhat tren dong %d cua ma tran la: %d\n",i,max);
    }
}

// Tìm phần tử lớn nhất trên cột j của ma trận (0<= j < n);
void Max_cot_j(matran a, int m, int n){
    for(int j=0;j<n;j++)
 	{
        int max=a[0][j];
        for(int i=1;i<m;i++){
        	if(a[i][j]>max)
            max=a[i][j];
		}            
        printf("Phan tu lon nhat tren cot %d cua ma tran la: %d\n",j,max);
    }
}

/* Hàm LaSNT(int n) trả về 1 nếu n là số nguyên tố, ngược lại trả về 0
*/
int LaSNT(int n)
{
    if(n < 2) return 0;
    for(int i=2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

/* Hàm LaMTSNT(int a, int m, int n) trả về 1 nếu toàn bộ phần tử là SNT,
   ngược lại trả về 0
*/
int DemSNT(matran a, int m, int n)
{
	int dem = 0;
    for(int i=0; i < m; i++)
	{
    	for(int j=0; j < n; j++)
    	{
    		if(LaSNT(a[i][j])) dem++;
		}
	}
    return dem;
}

/*
Sắp xếp từng hàng tăng dần.
Cách giải quyết:
- Lần lượt xét từng hàng của ma trận.
- Mỗi hàng của ma trận {a[i][0], a[i][1],..,a[i][n-1]} là mảng 1 chiều, 
  tiến hành sắp xếp mảng 1 chiều.
*/
void SapXepMT(matran a, int m, int n)
{
    // Xét từng hàng của ma trận
    for(int i=0; i < m; i++)
    { // Sắp xếp các phần tử trên hàng i tăng dần
      // giải thuật đổi chỗ trực tiếp
        for(int j=0; j < n-1; j++)
        {
            for(int k=j+1; k < n; k++)
            if(a[i][j] > a[i][k]) 
            {
                int t = a[i][j];
                a[i][j] = a[i][k];
                a[i][k] = t;
            }
        }
    }
}