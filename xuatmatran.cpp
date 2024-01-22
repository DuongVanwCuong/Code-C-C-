/* Nhap xuat ma tran*/

#include<iostream>
using namespace std;

int main ()
{
	int matrix1[100][100];
	int m , n ;
	cout << "So hang cua ma tran : " ;
	cin >> m ;
	cout << "So cot cua ma tran : " ;
	cin >> n ;
	
	
	
	for (int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++ ){
			cout << "Phan tu cua a[" << i <<"][" << j << "] : " ;
			cin >> matrix1[i][j];
			}}
			
	cout << " Ma tran co dang : "  << endl ;
	for (int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++ ){	
		
		cout << matrix1[i][j] ;
		cout << " " ;
		}
		cout << endl ;
		}	
	
	return 0 ;
}
