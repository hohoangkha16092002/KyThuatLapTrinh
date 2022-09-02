/*
Bài 7. Vận dụng kỹ thuật truyền đối số cho hàm main, 
viết chương trình có tên Show để hiển thị 
nội dung file văn bản lên màn hình từ dấu nhắc dòng lệnh (command prompt).
*/

#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *path = argv[1];
	
	FILE *fp; // Khai bao con tro file	
	fp = fopen(path, "rt"); // r = readonly, t = text
	if(fp == NULL)
		printf("Khong mo duoc file %s.", path);
	else
	{   // Doc tung ky tu -> in ra man hinh
		while(!feof(fp)) 
		{
			printf("%c", fgetc(fp));
		}
		fclose(fp);
	}
	return 0;
}
	
		
	