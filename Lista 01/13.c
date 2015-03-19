#include <stdio.h>
float mediapond(float x, float a, float y, float b, float z, float c);
main()
{
	float n1, n2, n3, p1, p2, p3;
	scanf("%f%f%f%f%f%f", &n1, &p1, &n2, &p2, &n3, &p3);
	printf("%f\n", mediapond(n1,p1,n2,p2,n3,p3));
	return 0;
}

float mediapond(float x, float a, float y, float b, float z, float c)
{
	return (((x*a) + (y*b) + (z*c))/(a + b + c));
}
	
	
