#include "stdio.h"
#define Max 100
#define Square(x) x*x
//a*b + a+b

int MaxOfTwo(int a, int b)
{
	if(a>b) return a;
	else return b;
}
int MaxOfFour(int a, int b, int c, int d)
{
	return MaxOfTwo(MaxOfTwo(a,b),MaxOfTwo(c,d));
}

int main(){
	//printf("%d",MaxOfFour(9,5,3,7));
	int a=5;int b=6;
	printf("%d", Square(a+a));
	return 0; 
	
}