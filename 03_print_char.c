#include<stdio.h>
int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
	printf("The subsequent 3 characters are:\n");
	for(int i=0;i<3;i++)
		printf("%c ",++character);
	printf("\n");
}
