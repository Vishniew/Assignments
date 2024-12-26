#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter 10 numbers: ");
	scanf("%d ",&a);
	scanf("%d ",&b);
	scanf("%d ",&c);
	scanf("%d ",&d);
	scanf("%d ",&e);
	scanf("%d ",&f);
	scanf("%d ",&g);
	scanf("%d ",&h);
	scanf("%d ",&i);
	scanf(" %d",&j);
	printf("%010d%10c%010d\n",a,' ',f);
	printf("%010d%10c%010d\n",b,' ',g);
	printf("%010d%10c%010d\n",c,' ',h);
	printf("%010d%10c%010d\n",d,' ',i);
	printf("%010d%10c%010d\n",e,' ',j);
}
