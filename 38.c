//Input an integer array from the user and display the same.//
#include <stdio.h>
int main() {
	int a[ 100 ], i, n;
	printf( "enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "enter elements to store in the array:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "the array contains: " );
	for ( i = 0; i <= n - 1; i++ ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}

