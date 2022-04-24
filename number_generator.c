#include <stdio.h>

int main()
{
	int num, index = 0;
	printf("Enter a number\n");
	scanf("%d",&num);
	do
	{
		printf("%d\n ",index+1);
		index = index + 1;
		// printf("%d",index);
		// printf("%d",num);
	} while (index<num);
	return 0;
}