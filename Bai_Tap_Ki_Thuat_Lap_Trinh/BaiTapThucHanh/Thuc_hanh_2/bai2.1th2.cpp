#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
float xmun1(float x, int n){
	float s=1;
	for(int i=1 ; i<=n;i++){
		s*=x;
	}
	return s;
}
float xmun2( float x, int n){
	if(n==0) return 1;
	return xmun2(x,(n-1))*x;
}
int giaithua1( int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
int giaithua2(int n){
	if(n==0) return 1;
	return giaithua2(n-1)*n;
}
int tong1toin1( int n){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	return s;
}
int tong1toin2(int n){
	if(n==0) return 0;
	return tong1toin2(n-1)+n;
}
int tongle1(int n){
	int s=0;
	for(int i=1;i<=(2*n-1);i=i+2){
		s+=i;
	}
	return s;
}
int tongle2(int n){
	if(n==0) return 0;
	return tongle2(n-1)+(2*n-1);
}

int tongchan1(int n){
	int s=0;
	for(int i=2;i<=(2*n);i=i+2){
		s+=i;
	}
	return s;
}
int tongchan2(int n){
	if(n==0) return 0;
	return tongchan2(n-1)+2*n;
}

int laSNT(int n){
	int dem=0;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	if(dem==0) return 1;
}
int tongsnt1(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		if(laSNT(i)==1) s+=i;
	}
	return s;
}
int tongsnt2(int n){
	if(n<2) return 0;
	else{
		if(laSNT(n)==1) return n+tongsnt2(n-1);
		else return tongsnt2(n-1);
	}
}
int demsnt1(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(laSNT(i)==1) dem++;
	}
	return dem;
}
int demsnt2(int n){
	if(n<2) return 0;
	else{
		if(laSNT(n)==1) return 1+demsnt2(n-1);
		else return demsnt2(n-1);
	}
}
int main(){
	//cout << "\nKet qua cau a la: " << xmun1(1.234,9);
	//cout << "\nKet qua cau a la: " << xmun2(1.234,9);
	//cout << "\nKet qua cau b la: " << giaithua1(9);
	//cout << "\nKet qua cau b la: " << giaithua2(9);
	//cout << "\nKet qua cau c la: " << tong1toin1(9);
	//cout << "\nKet qua cau c la: " << tong1toin2(9);
	//cout << "\nKet qua cau d la: " << tongle1(9);
	//cout << "\nKet qua cau d la: " << tongle2(9);
	//cout << "\nKet qua cau e la: " << tongchan1(9);
	//cout << "\nKet qua cau e la: " << tongchan2(9);
	//cout << "\nKet qua cau f la: " << tongsnt1(9);
	//cout << "\nKet qua cau f la: " << tongsnt2(9);
	//cout << "\nKet qua cau g la: " << demsnt1(9);
	//cout << "\nKet qua cau g la: " << demsnt2(9);
}
