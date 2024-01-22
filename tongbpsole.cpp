/* tinh tong binh phuong cac so le */

#include<bits/stdc++.h>
using namespace std ;

int sole(int n)
{ 
int kq ;
if(kq = n%2 ==1)
{ 
return true ;
}
else 
{
return false ;
}
}
void lietke(int n)
{	
	int sum=0 ;
	for (int i = 1 ; i <= n ; i ++)
	{
		if(sole(i)==true){
			sum = sum + i*i ;
			}
			}
			cout << sum << endl;
			}
		
int main ()
{
	int k ;
	cin >> k ;
	lietke(k);
	return 0 ;
	}
	
// or 

//#include<bits/stdc++.h>
//using namespace std ;
//int main()
//{
//int n ;
//cin >> n ;
//int sum = 0 ;
//
//for (int i = 1 ; i <= n ; i++)
//{
//	if(i%2 == 1)
//	{ 
//	sum = sum + i*i ;
//  }
//  }
//  cout << sum << endl ;
//  return 0 ;
//  }
