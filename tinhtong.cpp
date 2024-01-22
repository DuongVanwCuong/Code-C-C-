/* tinh tong S = 1+ 2x^2 + 3x^3 + ... + nx^n */

#include<bits/stdc++.h>
using namespace std ;

int main ()
{
	int n ;
	float x ;
	cin >> n >> x;
	int sum = 1 ;
	
	for(int i = 1 ; i <= n ; i++){
		sum += i * pow(x,i);
		}
		cout << sum ;
		return 0 ;
		}
