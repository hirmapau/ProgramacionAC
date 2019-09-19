#include <stdio.h>
#include <stdlib.h>

float Max(float num1 , float num2, float num3) { //make a condition where the max number is going to print between TWO numbers
	float result;
	if (num1 >= num2 && num1 >= num3) {
		result = num1;
	}
	else if (num2 >= num1 && num2 >= num3) {
		result = num2;
	}
	else {
		result = num3;
		
		}
	return result;
}

int main() {
	printf("The max number is: %f", Max(0.9, 0.99, 0.999)); //only way this function can work is CALLING the function and the two parameters 
	
	return 0;
}