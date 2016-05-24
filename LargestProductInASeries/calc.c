#include <stdio.h>
int main(){
	char number[1001];
	printf("Enter the number: ");
	fgets(number, 1001, stdin);
	//printf("%s", number);

	long max = 0;
	int current[13];
	for(int i = 0; i < 13; i++){
		current[i] = -1;
	}

	for(int i = 0; i < 1001 && number[i] != '\0'; i++){
		if(current[12] == -1){
			for(int j = 12; j > 0; j--){
				current[j] = current[j - 1];
			}
			current[0] = number[i] - '0';
			continue;
		}

		long sum = 1;
		for(int j = 0; j < 13; j++){
			sum *= current[j];
		}
		max = (sum > max) ? sum : max;

		for(int j = 12; j > 0; j--){
			current[j] = current[j - 1];
		}
		current[0] = number[i] - '0';
	}

	printf("%ld\n", max);
}
