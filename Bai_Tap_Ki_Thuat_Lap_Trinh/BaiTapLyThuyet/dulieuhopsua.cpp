#include<iostream>
using namespace std;
typedef struct{
	int day;
	int month;
	int year;
}ngay;
typedef struct{
	char nhanhieu[20];
	float trongluong;
	ngay hsd;
}hopsua;
void nhapdl( hopsua &hs)
