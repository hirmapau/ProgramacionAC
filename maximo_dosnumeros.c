#include <stdio.h>
#include <stdlib.h>

int Max(int num1 , int num2) { //make a condition where the max number is going to print between TWO numbers
	int result;
	if (num1 > num2)
	{
		result = num1;
	} else {
		result = num2;
	}
	return result;
}

int main() {
	printf("The max number is: %d", Max(4, 10)); //only way this function can work is CALLING the function and the two parameters 
	
	return 0;
}