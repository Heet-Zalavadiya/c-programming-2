#include <stdio.h>

void simpleInterest(int, int, int); 

void main(){
	int p,r,t;
	printf("Enter Principal amount : ");
	scanf("%d",&p);
	printf("Enter Rate Of Interest : ");
	scanf("%d",&r);
	printf("Enter Time in year : ");
	scanf("%d",&t);
	simpleInterest(p,r,t);
}

void simpleInterest(int p,int r,int t){
	float si = (p*r*t)/100.0;
	printf("Interest = %f",si);
}

