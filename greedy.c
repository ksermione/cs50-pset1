#include <stdio.h>
#include <math.h>

void numberOfCoins(float floatNumber);

int main(void) 
{
	float floatNumber;
	do {
		printf("O hai! How much change is owed? ");
		scanf("%f", &floatNumber);
	} while (floatNumber < 0.0);

	numberOfCoins(floatNumber);
}

void numberOfCoins(float floatNumber) 
{
	int quarter = 25, dime = 10, nickel = 5, penny = 1, coins = 0;
	int number = roundf(floatNumber * 100);
	while (number > 0) {
		while (number >= quarter) {
			number -= quarter;
			coins += 1;
		} 
		while (number >= dime) {
			number -= dime;
			coins += 1;
		} 
		while (number >= nickel) {
			number -= nickel;
			coins += 1;
		} 
		while (number >= penny) {
			number -= penny;
			coins += 1;
		}
	}

	printf("%i\n", coins);
}
