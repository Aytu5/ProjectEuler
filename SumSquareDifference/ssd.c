#include <stdio.h>

int main(){
	long currentSum = 0;
	long currentSquareSum = 0;
	for(int i = 1; i <= 100; i++){
		currentSum += i;
		currentSquareSum += i * i;
	}
	printf("Result: %ld\n", (currentSum * currentSum) - currentSquareSum);
}