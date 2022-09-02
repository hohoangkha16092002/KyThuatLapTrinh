#include<iostream>
#include<math.h>
using namespace std;
typedef struct Phanso{
	int Tuso;
	int Mauso;
}ps;
void Nhapps(ps &p){
	cout << "Tuso ";
	cin >> p.Tuso;
	do{
	cout << "Mauso ";
	cin >> p.Mauso;
	}while(p.Mauso==0);
}
void Xuatps(ps p){
	cout << p.Tuso << "/" << p.Mauso << endl;
}
int ucln( int a, int b){
	a=abs(a);
	b=abs(b);
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
Phanso tongps( ps p1, ps p2 ){
	Phanso p3;
	p3.Tuso=p1.Tuso*p2.Mauso+p1.Mauso*p2.Tuso;
	p3.Mauso=p1.Mauso*p2.Mauso;
	return p3;
}
Phanso toigian( ps &p){
	int uucln=ucln(p.Tuso,p.Mauso);
	p.Tuso/=uucln;
	p.Mauso/=uucln;
	return p;
}
Phanso hieups( ps p1, ps p2 ){
	Phanso p4;
	p4.Tuso=p1.Tuso*p2.Mauso-p1.Mauso*p2.Tuso;
	p4.Mauso=p1.Mauso*p2.Mauso;
	return p4;
}
int main(){
	Phanso p1,p2,p3,p4;
	cout << "\nNhap vao phan so A ";
	Nhapps(p1);
	cout << "\nPhan so A vua nhap la:";
	Xuatps(p1);
	toigian(p1);
	cout << "\nPhan so A toi gian la: ";
	Xuatps(p1);
	cout << "\nNhap vao phan so B ";
	Nhapps(p2);
	cout << "\nPhan so B vua nhap la:";
	Xuatps(p2);
	toigian(p2);
	cout << "\tPhan so B toi gian la: ";
	Xuatps(p2);
	cout << "\nTong A va B la: ";
	p3=tongps(p1,p2);
	toigian(p3);
	Xuatps(p3);
	cout << "\nHieu A va B la: ";
	p4=hieups(p1,p2);
	toigian(p4);
	Xuatps(p4);
	
	
	
}
