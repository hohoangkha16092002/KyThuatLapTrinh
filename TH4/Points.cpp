#include<iostream>
#include<stdio.h>
#include<math.h>
#define max 1000
#define filename "D:\\HOCTAP\\Nam_2_HK1\\KyThuatLapTrinh\\TH4\\point.txt"
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

float MinKC(Point p[], int n){
	float mind=TinhKC(p[0],p[1]);
	for(int i=1;i<n;i++){
		if(TinhKC(p[i],p[i+1])<mind) mind=TinhKC(p[i],p[i+1]);
	}
	return mind;
}
void CapDiemGanNhat( Point p[], int n){
	for(int i=0;i<n;i++){
		if(TinhKC(p[i],p[i+1])==MinKC(p,n)){
			cout << "\nCap diem gan nhau nhat la: Diem " << i+1 << " va " << i+2;
			break; 
		}
	}
}
void GhiDSDiemVaoFile( char fname[], Point p[], int n){
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
void DocDSDiemTuFile(char fname[], Point p[], int &n){
	FILE *fp=fopen(fname,"rt");
	printf("\n\nDanh sach duoc doc tu File:");
	if (fp == NULL){
       printf("Error! opening file");
       exit(1);
   	}
	else
	{
		fscanf(fp,"%d",&n);
		for(int i=0;i<n;i++)
		{
			fscanf(fp,"%f %f\n", &p[i].x,&p[i].y);
		}                                          
		fclose(fp);
	}
}

// Sap xep tang dan theo thu tu khoang cach den goc toa do
void SortByDistanceTo_O(Point p[], int n){
	p[max].x = 0;
	p[max].y = 0;
	
	printf("\n\nDanh sach diem sap xep theo thu tu tang dan khoang cach den goc toa do:\n");
	
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(TinhKC(p[max],p[i]) > TinhKC(p[max],p[j])){
                // Hoan vi 2 so a[i] va a[j]
                p[max-1] = p[i];
				p[i] = p[j];
				p[j] = p[max-1];
            }
        }
    }
	InDSDiem(p,n);
}


int main(){
	int n,m;
	Point p[max];
	Point p1[max];
	
	NhapDSDiem(p,n);
	InDSDiem(p,n);
	CapDiemGanNhat(p,n);
	GhiDSDiemVaoFile(filename,p,n);

	DocDSDiemTuFile(filename,p1,m);
	InDSDiem(p1,m);
	
	SortByDistanceTo_O(p,n);
	
	return 0;
}
