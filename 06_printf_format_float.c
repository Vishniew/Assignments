#include<stdio.h>
int main()
{
	float val;
	printf("Enter value: ");
	scanf("%f",&val);
	printf(" :%f: \n", val);
	printf(" :%10.4f: \n", val);
	printf(" :%.0f: \n", val);
	printf(" :%08.2f: \n", val);
}
