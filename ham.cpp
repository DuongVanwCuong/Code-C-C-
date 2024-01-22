#include<bits/stdc++.h>
using namespace std ;

 float tinhDTB(float dT , float dV )
{
	return (dT + dV) /2 ; 
	}

int main(){
	string hoTen;
	float diemToan ;
	float diemVan ;
	
	cout << "Nhap ten hoc sinh: ";	
	getline(cin,hoTen) ;
	do{
		cout << " Diem toan: "  ;
		cin >> diemToan ;
	}
	while(diemToan < 0 || diemToan > 10);

	do{
		cout << " Diem van: "  ;
		cin >> diemVan ;
	}
	while(diemVan <0 || diemToan > 10 );

cout << "Diem TB cua " << hoTen << " la :"<< tinhDTB(diemToan,diemVan) << endl ; 
	return 0 ;
	}
