//Viết hàm đệ quy xác định chiều dài chuỗi.

#include <stdio.h>
using namespace std;

int dodai(char *c,int dem)
{
if(c[dem]!='\0') dodai(c,dem+1);
else return dem;
}
int main()
{
	char c[20];
	printf ("Nhap chuoi:");
	scanf ("%s", c);
	printf ("Do dai chuoi la: %d",dodai(c,0));
}