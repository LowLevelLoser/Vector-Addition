#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int numberOfVectors;
	printf(" Make sure you draw this first add or subtract 180 degrees in a way that makes sense \n\n How many vectors are you adding: ");
	scanf(" %i", &numberOfVectors);

	double Ry = 0;
	double Rx = 0;

	for (int i = 0; i < numberOfVectors; i++) {
		double magnitude, angle;
		printf("what is the magnitude of your vector: ");
		scanf("%lf", &magnitude);
		printf("what is the angle of your vector: ");
		scanf("%lf", &angle);
		angle = angle * 0.01745329;

		Ry = Ry + magnitude*(sin(angle));
		Rx = Rx + magnitude*(cos(angle));
	}
	
	double magnitude = sqrt((Rx*Rx)+(Ry*Ry));
	double angle;	
	if(Rx == 0){
		angle = 90;
	}
	else{
		angle = atan(Ry/Rx) * 57.2958;
	}

	//printf(" shit head%i \n", numberOfVectors);
	printf("angle: %lf \nmagnitude: %lf \n", angle, magnitude);
	return 0;
}


/*
double newVector(){

}
*/
