//2.7. Viết chương trình in n dòng của tam giác Pascal bằng phương pháp đệ quy và không đệ quy.

#include <stdio.h>
long combin(int n, int k)
{
    if (k==0 || k==n) return 1;
    return combin(n-1,k-1)+combin(n-1,k);
}

int factorial(int n) {
   	int f;
    
   	for(f = 1; n > 1; n--)
      	f *= n;
       
   return f;
}

int ncr(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}

 
int main()
{
    int n, k, j, i;
    printf("Nhap n:");
    scanf("%d",&n);
    
    printf("\nVe tam giac Pascal (de qui):\n\n");
    for(k = 0; k <= n; k++) {
      	for(j = 0; j <= n-k; j++)
         	printf("  ");
          
      	for(j = 0; j <= k; j++)
         	printf(" %3d", combin(k,j));
         	
      	printf("\n");
    }
    
    printf("\n\nVe tam giac Pascal:\n\n");
   	for(i = 0; i <= n; i++) {
      	for(j = 0; j <= n-i; j++)
         	printf("  ");
         
      	for(j = 0; j <= i; j++)
         	printf(" %3d", ncr(i, j));

      	printf("\n");
   }
      	
}