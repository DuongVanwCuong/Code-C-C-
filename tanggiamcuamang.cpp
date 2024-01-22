/* Sap xep tang giam cua mang 1 chieu */

#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int m ;
	cout << "Nhap so phan tu trong mang: " ;
	cin >> m ;
	
	int a[100] ;
	
	for(int i = 0 ; i < m ;i++)
	{
		cout << "Phan tu cua mang a[" << i <<"] :" ;
		cin >> a[i] ;
		}
	
//	cout << endl << "Mang co dang :" << endl ;
//	cout << "DvC[" << m <<"]= " ;
//	for(int i = 0 ; i < m ;i++)
//	{
//		cout << " "<<a[i] ;
//		}
//	cout << endl;
	for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];          // hoan doi vi tri 2 phan tu
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<endl << "Mang tang dan : " ;
    for (int i = 0; i < m; i++) {
        cout <<a[i] << " ";
    }
    
    for (int i = 0; i < m - 1; i++){
        for (int j = i + 1; j < m; j++){
    
            if(a[i] < a[j]) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << endl << "Mang giam dan : " ;     
    for (int i = 0; i < m; i++) {
        cout <<a[i] << " ";
    }
	return 0 ;
	}
	
	
