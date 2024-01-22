#include<bits/stdc++.h>

using namespace std ;

bool songuyento(int num)

{
	if (num <= 1)
	return false ;
	for(int i = 2 ; i<= sqrt(num) ; i++ ){
		if(num%i ==0)
		return false;
		}
	return true ;

	}
	
void lietke(int n){
for (int i = 1 ; i <= n ; i++ ){
	if(songuyento(i) == true) {
		cout << i << " ";
		}}}	
	
bool sochinhphuong(int n)

{
 float kq =sqrt(n);
 if (kq == (int)kq)
 { 
 return true ;
 }
 return false ;
 }

void lietke1(int n){
for(int i = 1 ; i <= n ; i++)
	{
		if(sochinhphuong(i) == true)
		{
				cout << i << " " ;
			}
			}
			}
 int main()
 {
 	int n ;
 	cout << "Nhap so thuc: " ;
 	cin >> n ;
 	
 	if (sochinhphuong(n) == true ) 
	{
 		cout << n <<" la so chinh phuong !" ;
 		}	
 	
 	else if (songuyento(n) == true )
    {
    	cout << n <<" la so nguyen to !" ;
    	}
 
	else{ 
	cout << n <<" khong phai so chinh phuong hay so nguyen to !" ;
	}

cout << "\nCac so nguyen to tu 1 den "<< n << ": " << endl;
lietke(n) ;
cout << "\nCac so chinh phuong tu 1 den " << n << ": " << endl ;
lietke1(n) ;
	
	 return 0 ;
	}
 
