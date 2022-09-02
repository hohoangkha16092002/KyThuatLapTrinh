//2.13. Viết chương trình đệ quy 
//		in ra số đảo ngược của một số nguyên dương. 
//		Ví dụ 1234 -> 4321.

#include<stdio.h>

int Reverse_ChuSoNguyen(int num){
	int temp, reverse_num = 0;
   	while(num>=1)
   	{
      	temp = num % 10;
      	reverse_num = reverse_num * 10 + temp;
      	num = num / 10;
   	}
   	return reverse_num;
}

int Reverse_ChuSoNguyen_DeQui(int num, int result=0)
{
   	if(num == 0) return result;
   	return Reverse_ChuSoNguyen_DeQui(num/10,result*10+num%10);
}


int main(){
   int num, reverse_num, sum=0;
 
   //User nhap so can dao nguoc
   printf("\nNhap mot so bat ki:");
   scanf("%d", &num);

   printf("\nSo %d sau khi dao nguoc :%d",num ,Reverse_ChuSoNguyen(num));
   printf("\nSo %d sau khi dao nguoc (de qui) :%d",num ,Reverse_ChuSoNguyen_DeQui(num));
   return 0;
}
