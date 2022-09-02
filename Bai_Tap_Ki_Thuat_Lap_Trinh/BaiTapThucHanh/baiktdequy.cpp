#include<iostream>
using namespace std;
int SoUocSo( int k){
	if(k==1) return 1;
	if(k%(k/2)==0)return SoUocSo(k/2) +1;
	else return SoUocSo(k/2);
}
int main(){
	cout << SoUocSo(6);
}
