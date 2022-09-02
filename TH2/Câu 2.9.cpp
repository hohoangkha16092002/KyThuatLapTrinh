/*
2.9. 	Đổi 1 số thập phân sang cơ số khác 
		bằng phương pháp đệ quy và không đệ quy
*/

#include <iostream> 
using namespace std; 


// Hàm đổi từ thập phân sang nhị phân
void DecToBinary(int n) 
{ 
    // Khai báo mãng chứa số nhị phân
    int binaryNum[1000]; 
 
    // biến đếm mãng chứa số nhị phân
    int i = 0; 
    while (n > 0) { 
        // chứa phần dư vào mảng nhị phân
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
 
    // in mảng nhị phân theo chiều ngược lại
    for (int j = i - 1; j >= 0; j--) 
        printf("%d",binaryNum[j]); 
} 

void DecToBinary_DeQui(int a){
	if(a != 1)
		DecToBinary_DeQui(a / 2);
	printf("%d",a%2);
}


int main() 
{ 
    int n; 
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nDoi %d sang he nhi phan: ",n);
    DecToBinary(n);
    printf("\n");
    printf("\nDoi %d sang he nhi phan (de qui): ",n);
    DecToBinary_DeQui(n);
    
    return 0; 
} 
