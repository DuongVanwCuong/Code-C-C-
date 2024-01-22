/* Tim max min cua mang 1 chieu voi n phan tu nhap tu ban phim */

#include<bits/stdc++.h>
using namespace std ;

int main ()
{
	int n ;
	cout << " Nhap cac phan tu cua mang = " ;
	cin >> n ;
	
	int a[n] ;
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << " Phan tu cua mang a[" << i << "] = " ;
		cin >> a[i] ;
		}
		
	int max = a[0] , min = a[0] ;
	
	for (int i = 1 ; i < n ; i++)
	{
		if (a[i] > max )
		{
			 max = a[i]  ;
			}
		if (a[i] < min )
		{
			min = a[i] ;
			}
			}
			cout << "GTLN = " << max << endl ;
			cout << "GTNN = " << min << endl ;
			
	return 0 ;
	}
			
