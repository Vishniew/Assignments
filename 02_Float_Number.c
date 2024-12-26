#include<stdio.h>
int main()
{
	float number;
	printf("Enter number: ");
	scanf("%f",&number);
	printf("Numbers with different decimal points: \n%.1f\n%.2f\n%.3f\n",number,number,number);
	return 0;
}
