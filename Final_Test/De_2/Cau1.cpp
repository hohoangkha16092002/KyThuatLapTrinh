#include<stdio.h>
#define Sum(x, y) x+y

int Add(int a=0, int b=0, int c=0, int d=0)
{
	return a + b + c + d;
}

int SumOfFive(int a, int b, int c, int d, int e){
	return Add(a,b,c,Add(d,e));
}

int main()
{
	int a=5,b=10,c=15,d=20,e=25;
	printf("%d", Sum(a*b, c+d));
	printf("\n%d", Add(a,b,c));
	printf("\n%d", SumOfFive(a,b,c,d,e));
	return 0;
}

/*Vì ban đầu đã định nghĩa hàm Sum(x,y) là x+y 
nên khi gọi hàm Sum(a*b, c+d) 
sẽ thực hiện tính (a*b) + (c+d) = (5*10) + (15+20) = 85
*/

