#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Truyen tham so sai. \n Vi du: Compute 3 * 6");
	}
	else
	{
		// Tach ra cac doi so
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char *pheptoan = argv[2];
		char op = pheptoan[0];
		
		switch(op)
		{
			case '*': printf("%d * %d = %d",a, b, a*b); break;
			case '+': printf("%d + %d = %d",a, b, a+b); break;
			case '-': printf("%d - %d = %d",a, b, a-b); break;
			case '/': printf("%d / %d = %d",a, b, a/b); break;
			default:
				printf("Khong thuc hien duoc phep toan %c", op);
		}
	}
}