#include <stdio.h>

void buildPyramid(int height);

int main(void)
{
	int height;	

	do {
		printf("height:");
		scanf("%i", &height);
	} while (height < 0 || height > 23);

	buildPyramid(height);
	
	return 0;
}

void buildPyramid(int height)
{
	int row = height + 1;
	for (int i = 2; height > 0; i++, height--) {
		for (int r = row - i; r > 0; r--) {
			printf(" ");
		}
		for (int t = i; t > 0; t--){
			printf("#");
		}
		printf("\n");
	}
}
