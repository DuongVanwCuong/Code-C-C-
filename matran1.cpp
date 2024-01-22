/* tinh tong hieu gtln gtnn cua 2 ma tran */

#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
   int i, j, matrix1[100][100], matrix2[100][100], matrix3[100][100], matrix4[100][100] ;
   int row1, col1, row2, col2;
 
   cout << "Nhap so hang cua matrix1: ";
   cin >> row1;
   cout << "Nhap so cot cua matrix1: ";
   cin >> col1;
 
   cout << "Nhap so hang cua matrix2: ";
   cin >> row2;
   cout << "Nhap so cot cua matrix2: ";
   cin >> col2;
 

 
   if (row1 != row2 || col1 != col2) {
      cout << "\nHai ma tran khong cung kich co!";
      exit(0);
   }
 
   cout<<"\nNhap ma tran 1\n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         cout<<"Nhap phan tu matrix1["<<i<<"]["<<j<<"]: ";
         cin >> matrix1[i][j];
      }
   }
 
 
   cout<<"\nNhap ma tran 2\n";
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
         cout<<"Nhap phan tu matrix2["<<i<<"]["<<j<<"]: ";
         cin >> matrix2[i][j];
      }
 

   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      }
 
 	for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         matrix4[i][j] = matrix1[i][j] - matrix2[i][j];
      }
  
   cout<<"\nKet qua cua phep cong hai ma tran la: \n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         cout<<"\t"<< matrix3[i][j];
      }
     cout<<endl;
   }
 
 	cout<<"\nKet qua cua phep tru hai ma tran la: \n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         cout<<"\t"<< matrix4[i][j];
      }
     cout<<endl;
   }
   int max = matrix2[0][0]  , min = matrix2[0][0]  ;
   for (i = 1 ; i < row2 ; i++){
   	  for (j = 1 ; j < col2 ; j++ ){
   	  	if(matrix2[i][j]>max)
   	  	{
   	  		max = matrix2[i][j] ;}
   	  	if(matrix2[i][j]<min)
   	  	{
   	  		min = matrix2[i][j] ;
   	  		}
   	  	}}
   	
   	cout << "Gia tri lon nhat trong matran B : " << max << endl ;
   	cout << "Gia tri nho nhat trong matran B : " << min << endl ;
   	  	
   return 0;
}
