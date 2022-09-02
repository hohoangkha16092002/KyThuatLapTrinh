#include <iostream>
#include <fstream>
using namespace std;
 
void MixWithoutSort(int *a,int na,int *b,int nb,int *c)
{
	if (na||nb)
	{
		if (na&&*a<*b) *c++=*a++,na--;
		   else *c++=*b++,nb--;
		MixWithoutSort(a,na,b,nb,c);
	}
}
int main()
{
    int x[20]={1,2,3,4,5,6,8,9,12},nx=9;
    int y[20]={3,4,7,8,10,11,15},ny=7;
    int z[40],nz=nx+ny;
    MixWithoutSort(x,nx,y,ny,z);
    for(int i=0;i<nz;i++)  printf("%d ",z[i]);
    system("pause");
}