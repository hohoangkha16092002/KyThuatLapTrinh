#include<iostream>
#include<stdio.h>
#include<math.h>
#define max 1000
using namespace std;
struct Point{
	float x;
	float y;
};
void NhapDiem( Point &p){
	cout << "\nNhap vao hoanh do X cua diem: ";
	cin >> p.x;
	cout << "\nNhap vao tung do Y cua diem: ";
	cin >> p.y;
}
void InDiem(Point &p){
	cout << "\nDiem co hoanh do la: " << p.x;
	cout << "\nDiem co tung do la: " << p.y;
	cout << "\nDiem la: (" << p.x << "," << p.y << ")";
}
void NhapDSDiem( Point p[], int &n){
	do{
	cout << "\nNhap vao so luong diem: ";
	cin >> n;
	if(n<=0) cout << "\nSo luong diem phai > 0!!! Hay nhap lai!!!";
	}
	while(n<=0);
	for(int i=0;i<n;i++){
		cout << "\nNhap vao thong tin cua diem " << i+1 << ": ";
		NhapDiem(p[i]);
	}
}
void InDSDiem(Point p[], int n){
	cout << "\nDanh sach Diem la: ";
	for(int i=0;i<n;i++){
		cout << "\nDiem" << i+1 << ": ";
		InDiem(p[i]);
	}
}
float TinhKC(Point p1, Point p2){
	float d=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
	return d;
}
float MinKC( Point p[], int n){
	float mind=TinhKC(p[0],p[1]);
	for(int i=2;i<n;i++){
		if(TinhKC(p[i],p[i+1])<mind) mind=TinhKC(p[i],p[i+1]);
	}
	return mind;
}
void CapDiemGanNhat( Point p[], int n){
	for(int i=0;i<n;i++){
		if(TinhKC(p[i],p[i+1])==MinKC(p,n)){
			cout << "\nCap diem gan nhau nhat la: Diem" << i+1 << " va " << i+2;
			break; 
		}
	}
}
void GhiDSDiem( char fname[], Point p[], int n){
	FILE *fp=fopen(fname,"wt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{
		fprintf(fp,"%d\n",n);
		for(int i=0;i<n;i++){
			fprintf(fp,"%.f %.f\n",p[i].x,p[i].y);
		}
		fclose(fp);
	}
}
void DocDSDiem(char fname[], Point p[], int &n){
	FILE *fp=fopen(fname,"rt");
	if(fp==NULL) cout << "\nLoi!!! Khong mo duoc FILE!!!";
	else
	{	fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++){
			fscanf(fp,"%f %f\n",&p[i].x,&p[i].y);
		}
		
	}
}
int main(){
	int n,m;
	Point p[max];
	Point p1[max];
	/*
	NhapDSDiem(p,n);
	InDSDiem(p,n);
	GhiDSDiem("d:\\points.txt",p,n);
	*/
	DocDSDiem("d:\\points.txt",p1,m);
	InDSDiem(p1,m);
	CapDiemGanNhat(p,n);
	
}
