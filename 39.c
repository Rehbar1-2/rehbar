//Display contents of an integer array in reverse order.//
#include <stdio.h>
int main() {
	printf( "displays contents of an integer array in reverse order.\n" );
	int a[100], i, n;
	
	printf( "enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "enter elements to store in the array:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "the array contains: " );
	for ( i--; i >= 0; i-- ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}
