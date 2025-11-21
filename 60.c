/* Demonstrate use of macros. */
#include <stdio.h>
#define PI 3.141
#define AREA( r ) r * r * PI

int main() {
	double radius;
	
	printf( "Enter radius of circle: " );
	scanf( "%lf", &radius );
	
	printf( "Area = %lf", AREA( radius ) );
	
	return 0;
}


