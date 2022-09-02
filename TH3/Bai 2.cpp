// Bài 2. Viết chương trình xác định kích thước của một tập tin.

#include<stdio.h>
#define fname "File/Tiengthu_LuuTrongLu.txt"

long get_file_size()
{
    FILE *fp;
    /* Open file for reading */
    fp = fopen(fname, "r");
    fseek(fp, 0, SEEK_END);
    return ftell(fp); 
}

int main()
{
	printf("Kich thuoc cua tap tin la: %ld",get_file_size());
}