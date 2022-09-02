//Ví dụ: Đọc và hiển thị nội dung file "TiengThu_LuuTrongLu.txt" 
//lưu trong thư mục "Chuongtrinh_Minhhoa":

/* Chuong trinh hien thi file van ban len man hinh.
*/

#include<stdio.h>
#define fname "File/Tiengthu_LuuTrongLu.txt"

// Ham mo 1 file van ban -> hien thi len man hinh
void ReadTextFile()
{
	FILE *fp; // Khai bao con tro file	
	fp = fopen(fname, "rt"); // r = readonly, t = text
	if(fp == NULL)
		printf("Khong mo duoc file %s.", fname);
	else
	{   // Doc tung ky tu -> in ra man hinh
		while(!feof(fp)) 
		{
			printf("%c", fgetc(fp));
		}
		
		fclose(fp);
	}
}

int main()
{
	ReadTextFile();
}
