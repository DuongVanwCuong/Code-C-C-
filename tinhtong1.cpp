/* tinh tong */

#include<bits/stdc++.h>
using namespace std ;

int main ()
{
	int x,y ;
	cin >> x >> y ;
	int s ;
	if(x > y)
	{
		s = 2*pow(x,2)*y + 1 - fabs(x-1);
		}
	else
	{
		s = 5*x-3*pow(y,3)*x ;
		}
		cout << s << endl ;
		
	return 0 ;
	
	}
