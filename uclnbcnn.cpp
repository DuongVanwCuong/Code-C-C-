/* tim UCLN BCNN a b */

#include<bits/stdc++.h>
using namespace std ;

int gcd(int a, int b)
{
	if(a == 0)
	{
		return b ;
		}
		return gcd(b%a,a) ;
	}
	
int lcm (int a,int b)
{
	return (a*b)/gcd(a,b);
	}
	
int main ()
{
	int m , n ;
	cin >> m >> n ;
	
	cout << gcd(m,n) << endl ;
	cout << lcm(m,n) ;
	
	return 0 ;
	}
