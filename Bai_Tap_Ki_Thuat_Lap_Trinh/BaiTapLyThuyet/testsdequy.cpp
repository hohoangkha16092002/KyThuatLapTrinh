#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int xmun(int x, int n){
	if(n==0) return 1;
	else return x*xmun(x,n-1);
}
int snt(int n){
	int dem=0;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
int tongmau(int n){
	if(n==1) return 1;
	else return n+tongmau(n-1);
}
float tongS(int n){
	if(n==1) return 1;
	else return (float)1/(tongmau(n-1)+n)+tongS(n-1);
}
int tongS16(int n){
	if(n==1) return 1;
	else return (n+tongmau(n-1))+tongS16(n-1);
}
int giaithua(int n){
	if(n==1) return 1;
	else return n*giaithua(n-1);
}
int tongn(int n){
	if(n==1) return 1;
	else return n+tongn(n-1);
}
int tongle(int n){
	if(n==1) return 1;
	else return tongle(n-1)+(2*n-1);
}
int tongchan(int n){
	if(n==0) return 0;
	else return tongchan(n-1)+(2*n);
}
int tongsnt(int n){
	if(n==0) return 0;
	else{
		if(snt(n)==1) return n+tongsnt(n-1);
		else return tongsnt(n-1);
	}
}
int demsnt(int n){
	if(n==0) return 0;
	else{
		if(snt(n)==1) return 1+demsnt(n-1);
		else return demsnt(n-1);
	}
}
int sovitrung( int n, int k, int h){
	if(h==1) return n*k;
	else return k*(sovitrung(n,k,h-1));
}
float tienlai(int m, float i, int n){
	if(n==0) return m;
	else return tienlai(m,i,n-1)+tienlai(m,i,n-1)*i;
}
int tohop( int n, int k){
	if(k==0||k==n) return 1;
	else{
		if(k>n) return 0;
		else return tohop(n-1,k)+tohop(n-1,k-1);
	}
}
int tongmang(int a[], int n){
	if(n==1) return a[0];
	else return a[n-1]+tongmang(a,n-1);
}
int tongduong(int a[], int n){
	if(n==0) return 0;
	else{
		if(a[n-1]>0) return a[n-1]+tongduong(a,n-1);
		else return tongduong(a,n-1);
	}
}
int demsntmang(int a[], int n){
	if(n==0) return 0;
	else{
		if(snt(a[n-1])==1) return 1+demsntmang(a,n-1);
		else return demsntmang(a,n-1);
	}
}
int maxmang( int a[], int n){
	if(n==0) return -1;
	else{
		if(snt(a[n-1])==1&&a[n-1]>maxmang(a,n-1)) return a[n-1];
		else return maxmang(a,n-1);
	}
}
int demlemang(int a[], int n){
	if(n==0) return 0;
	else
	{
		if(a[n-1]%2!=0) return 1+demlemang(a,n-1);
		else return demlemang(a,n-1);
	}
}
int tongchuso(int n){
	if(n==0) return 0;
	else return tongchuso(n/10)+n%10;
}
int maxchuso(int n){
	int max=n%10;
	if(n%10==0) return max;
	else
	{
		if(max>0);
	}
}
int scp(int n){
	int temp=(int)sqrt(n);
	if(temp*temp==n) return 1;
	else return 0;
}
void ktscp(int n){
	if(scp(n)==1) cout << "\nYes";
	else cout << "\nNo";
}
int TichChuSoLe(int n){
	if(n==0) return 1;
	if(n%2!=0) return TichChuSoLe(n/10)*(n%10);
	return TichChuSoLe(n/10);
}
int main(){
	int a[100]={1,2,9,4,5,6};
//	cout << tongS1(4) << endl;
//	cout << tongS(4) << endl;
//	cout << tongmau(4) << endl;
//	cout << tongS16(4) << endl;	
//	cout << xmun(4,3) << endl;
//	cout << giaithua(4) << endl;
//	cout << tongn(4) << endl;
//	cout << tongle(4) << endl;
//	cout << tongchan(4) << endl;
//	cout << demsnt(6) << endl;
//	cout << tongsnt(6) << endl;
//	cout << sovitrung(5,2,3) << endl;
//	cout << tienlai(1000,0.12,30) << endl;
//	cout << tohop(12,3) << endl;
//	cout << tongmang(a,6) << endl;
//	cout << tongduong(a,6) << endl;
//	cout << demsntmang(a,6) << endl;
//	cout << maxmang(a,6) << endl;
//	cout << tongchuso(321123) << endl;
//	ktscp(15);
	//cout << demlemang(a,6);
	cout << TichChuSoLe(135);
	
	
}
