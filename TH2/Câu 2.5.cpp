/*2.5. Cho mảng một chiều các số nguyên đã được sắp xếp thứ tự tăng dần. 
Viết hàm đệ quy tìm vị trí phần tử x trong dãy (nếu có).*/ 
#include <stdio.h>
 
void NhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}
 
void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

int timx (int a[], int x, int n){

	if (x == a[n]) return n;
	else return timx(a,x,n-1);
}

int main(){
    int a[100];
    int n, x;
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    
    NhapMang(a, n);
    
    printf("\nMang vua nhap la: ");
    XuatMang(a, n);
    
    // Sap xep tang dan:
    TangDan(a, n);
    printf("\nMang sap xep tang dan la: ");
    XuatMang(a, n);
    
    printf("\nNhap so can tim: "); scanf("%d", &x);
    printf("\nSo can tin nam o vi tri a[%d]",timx(a, x, n));
    
}
