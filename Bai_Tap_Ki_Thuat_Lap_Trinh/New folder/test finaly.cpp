#include<iostream>
using namespace std;
int main(){
	int tuoi,step,loi;
	cout << "\nNhap vao tuoi cua nguoi su dung dich vu: ";
	cin >> tuoi;
	cout << "\nNhap vao ma dich vu: ";
	cin >> loi;
	cout << "\nNhap vao don vi tinh: ";
	cin >> step;
	if(tuoi < 18){
	switch(loi){
		case 1: cout << "\nGia tien: " << 2*step*0.85;
		break;
		case 2: cout << "\nGia tien: " << 2*step*0.85;
		break;
		case 3: cout << "\nGia tien: " << 15*step*0.85;
		break;
		case 4: cout << "\nGia tien: " << 20*step*0.85;
		break;
		case 5: cout << "\nGia tien: " << 150*step*0.85;
		break;
		case 6: cout << "\nGia tien: " << 7.5*step*0.85;
		break;
		case 7: cout << "\nGia tien: " << 7.5*step*0.85;
		break;
		case 8: cout << "\nGia tien: " << 2*step*0.85;
		break;
		case 9: cout << "\nGia tien: " << 3*step*0.85;
		break;
}
	}
	else{
		switch(loi){
		case 1: cout << "\nGia tien: " << 2*step;
		break;
		case 2: cout << "\nGia tien: " << 2*step;
		break;
		case 3: cout << "\nGia tien: " << 15*step;
		break;
		case 4: cout << "\nGia tien: " << 20*step;
		break;
		case 5: cout << "\nGia tien: " << 150*step;
		break;
		case 6: cout << "\nGia tien: " << 7.5*step;
		break;
		case 7: cout << "\nGia tien: " << 7.5*step;
		break;
		case 8: cout << "\nGia tien: " << 2*step;
		break;
		case 9: cout << "\nGia tien: " << 3*step;
		break;
	}
}
}
