#include<stdio.h>
#include<iostream>
using namespace std;
int toanchusole(int k){
	int tachso;
	int	dem=0;
	int demle=0;
	while(k!=0){
		tachso=k%10;
		dem++;
		if(tachso%2!=0) demle++;
		k/=10;
	}
	if(dem==demle) return 1;
	else return 0;
}
void inle(int n){
	for(int i=1;i<=n;i++){
		if(toanchusole(i)==1) cout << " " << i;
	}
}
int main(){
	int n;
	do{
		cout << "\nnhap N";
		cin >> n;
	}
	while(n<10||n>10000);
	inle(n);
}
