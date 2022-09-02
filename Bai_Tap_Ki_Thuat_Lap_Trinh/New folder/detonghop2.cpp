#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
struct Point{
	float x;
	float y;
};
void NhapDiem( Point &p){
	cout << "\nHoanh do: ";
	cin >> p.x;
	cout << "\nTung do: ";
	cin >> p.y;
}
void InDiem( Point p){
	cout << p.x << "/" << p.y;
}
void NhapDSDiem( Point p[], int &n){
	cout << "\nNhap vao so luong diem: ";
	cin >> n;
	for(int i=0; i<n;i++){
		cout << "\nNhap diem thu " << i+1 << " : ";
		NhapDiem(p[i]);
	}
}
void InDSDiem( Point p[], int n){
	cout << "\nDanh sach diem la: ";
	for(int i=0;i<n;i++){
		cout << "\nDiem thu " << i+1 << " : ";
		InDiem(p[i]);
	}
}
float khoangCach( Point p1, Point p2){
	return sqrt( pow(( p1.x-p2.x ),2) + pow(( p1.y-p2.y ),2));
}
float MinKC(Point p[], int n){
	float kcmin= khoangCach(p[0],p[n-1]);
	for(int i=0;i<n;i++){
		if(khoangCach(p[i],p[i+1])<kcmin) kcmin=khoangCach(p[i],p[i+1]);
	}
	return kcmin;
}
void CapDiemGanNhat(Point p[], int n){
	cout << "\nHai diem gan nhau nhat la: ";
	float kcmin= khoangCach(p[0],p[n-1]);
	if(kcmin==MinKC(p,n)){
		InDiem(p[0]);
		cout << " va ";
		InDiem(p[n-1]);
	}
	for(int i=0;i<n;i++){
		if(khoangCach(p[i],p[i+1])==MinKC(p,n)){
			InDiem(p[i]);
			cout << " va ";
			InDiem(p[i+1]);
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
float KctoO(Point p){
	return sqrt(pow(p.x,2)+pow(p.y,2));
}
void sapxep(Point p[], int n){
    Point temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( KctoO(p[i]) > KctoO(p[j])){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
int main(){
	int n,m;
	Point p[100];
	Point p1[100];
	char fname[]="d:\\points.txt";
	char fname1[]="d:\\dspoint.txt";
	NhapDSDiem(p,n);
	InDSDiem(p,n);
	CapDiemGanNhat(p,n);
	GhiDSDiem(fname,p,n);
	DocDSDiem(fname1,p1,m);
	InDSDiem(p1,m);
	sapxep(p,n);
	InDSDiem(p,n);
}
