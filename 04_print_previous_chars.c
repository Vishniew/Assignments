#include<stdio.h>
int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
	printf("The previous 3 characters are:\n");
	for(int i=3;i>0;i--)
		printf("%c ",character-i);
	printf("\n");
}
