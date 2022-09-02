#include<stdio.h>

int ToanChuSoChan(int k) {
	if(k==0)
    {
        return 1;
    }
    else
    {
        int chuso = k%10;
        if(chuso %2 != 0)
        {
            return 0;
        }
        return ToanChuSoChan(k/10);
    }
}

void InSoChan(int n) {
 	for (int i = 1; i<n; i++)
 	{
 		if(ToanChuSoChan(i)==1)
		{
 			printf("%d\t",i);
		}
	}
}

int main()
{
	int k;
	do
	{
		printf("\nNhap so nguyen duong k: ");
		scanf("%d", &k);
		if(k < 0)
		{
		  	printf("\nSo k phai >= 0!"); 
		}
	}while(k < 0);
 
	if(ToanChuSoChan(k)==0)
    {
        printf("%d khong phai la chu so toan chan\n",k);
    }
    else
    {
        printf("%d toan chu so chan\n",k);
    }
    InSoChan(k);
}