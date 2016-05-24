#include <stdio.h>

int main(){
	long primes[10001];
	long current = 2;

	for(int i = 0; i < 10001; current++){
		if(current < 0){
			printf("Overflow detected!");
			break;
		}
		int isPrime = 1;
		for(int j = 0; j < i; j++){
			if(current % primes[j] == 0){
				isPrime = 0;
				//printf("%ld is not a prime\n", current);
				break;
			}
		}
		if(isPrime){
			primes[i++] = current;
			printf("Found one! %ld\n", current);
		}
	}

	printf("result: %ld\n", primes[10000]);
}