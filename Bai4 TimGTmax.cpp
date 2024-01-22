// Tim gia tri lon nhat
#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,d,e;
	cout << " Nhap vao 5 so thuc :" ;
	cin >>a >>b >>c >>d >>e ;
	float max = a ;
	
    if (b>max){
	max = b;
	}
    if (c>max){
	max = c;
	}
	if (d>max){
	max = d;
	}
	if(e>max){
	max = e;
	}
	if ( a== b && b==c && c==d && d==e)
	cout << " Khong co so nao lon nhat !"<< endl ;
	else 
	cout << "So thuc lon nhat la :" << max <<endl ;
		
	return 0; 
	}	
	
