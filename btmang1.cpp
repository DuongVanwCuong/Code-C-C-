/* Tinh tong tich va trung binh cua mang 1 chieu voi n phan tu nhap tu ban phim */

#include<bits/stdc++.h>
using namespace std ;
	
int main()
{ 
	int n ;
	cout << " Nhap so phan tu cua mang : " ;
	cin >> n ;
	
	int a[n];
	
	for (int i =0 ; i < n ; i++)
	{
		cout <<"Phan tu cua mang a["<< i << "] : " ;
		cin >> a[i] ;
		}
	
	long tong = 0 , tich = 1 ;
	double tb ;
	
	for (int i = 0 ; i < n ; i++)
	{
		tong += a[i];
		tich *= a[i];
		}
		cout << "Tong = " << tong << endl ;
		cout << "Tich = " << tich << endl ;
		
	tb = tong/n ;
		cout << "Trung binh = " << tb << endl ;
		
		return 0 ;
		}
