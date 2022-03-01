#include<stdio.h>
 int fun(int x,int y)
 {
 	if( y == 0)
	 {
	 	return 1 ;
	 }
	else
		return x * fun(x,y-1); 
 }
 
 int main()
 {
 	int a = 5 , b = 4 ;
 	printf("%d",fun(a,b));
 }
