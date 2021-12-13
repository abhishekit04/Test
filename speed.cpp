#include<stdio.h>

int main() {
	
	float s, t, d;
	printf("Enter distance and time : \n");
	scanf("%f%f",&d,&t);
	s = d/t;
	printf("Speed = %f", s);
	printf("\n\n");
	
	
	printf("\n------------------\n\n\n");
	
	printf("Enter speed and time : \n");
	scanf("%f%f",&s,&t);
	d = s*t;
	printf("distance = %f", d);
	
	printf("\n------------------\n\n\n");
	
	printf("Enter speed and distance : \n");
	scanf("%f%f",&s,&d);
	t = d/s;
	printf("Time = %f", t);
	
	printf("\n\n");
	
	float si , p, rate, time;
	p = 100;
	rate = 5;
	time = 12;
	si = (p * rate * time)/100;
	printf("SI = %f", si);
	
	
	return 0;
}
