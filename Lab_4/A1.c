#include <stdio.h>

float maxThree(float,float,float);

void main() {
	float a,b,c;
	printf("Enter 3 floating-point number: ");
	scanf("%f %f %f", &a, &b, &c);
	
	float result = maxThree(a,b,c);
	printf("max of 3 float number is %.2f",result);
}

float maxThree(float x, float y, float z) {
    float max = x;

    if (y > max) {
    	max = y;
	}
        
    if (z > max) {
    	max = z;
	}
    return max;
}
