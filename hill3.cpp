#include <iostream.h>
#include<conio.h>
#include <math.h>
void main()
{
int ct[ 3 ][ 1 ],key[ 3 ][ 3 ], msg[ 3 ][ 1 ];
int i,j,k;
char pt[3];
cout << "Enter 3x3 matrix for key:\n" ;
for ( i = 0 ; i < 3 ; i ++)
for ( j = 0 ; j < 3 ; j ++)
cin >> key[ i ][ j ];
cout << "\nEnter a string of 3 letter(use A through Z): " ;
cin>>pt;
for ( i = 0 ; i < 3 ; i ++)
{
msg [ i ][ 0 ] = pt[ i ] - 65 ;
}
for ( i = 0 ; i < 3 ; i ++)
for ( j = 0 ; j < 1 ; j ++)
for ( k = 0 ; k < 3 ; k ++)
ct[ i ][ j ]+= key[ i ][ k ] * msg [ k ][ j ];
cout << "\nEncrypted string is: " ;
for ( i = 0 ; i < 3 ; i ++)
cout <<( char )( fmod (ct[ i ][ 0 ], 26 ) + 65 ); //modulo 26 is taken for each
//element of the matrix obtained by multiplication
getch();
}
