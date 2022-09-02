/*2.2. Viết hàm tìm số hạng thứ n của dãy Fibonacci bằng phương pháp đệ quy và không đệ quy.*/

#include <stdio.h>
#include <conio.h>

int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int Fibonacci_dequy(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci_dequy(n - 1) + Fibonacci_dequy(n - 2);
}

int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("\nSo Fibonacci thu %d la: %d", n, Fibonacci(n));
    printf("\nSo Fibonacci thu %d la (de qui): %d", n, Fibonacci_dequy(n));
	return 0;
}
