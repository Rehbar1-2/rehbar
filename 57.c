//Find factorial of a number using recursion.


#include <stdio.h>
int fact( int n );

int main() {
	int n;
	printf( "Enter number: " );
	scanf( "%d", &n );
	
	printf( "%d", fact( n ) );
	return 0;
}

int fact( int n ) {
	if ( n <= 1 ) {
		return 1;
	} else {
		return n * fact( n - 1 );
	}
}


