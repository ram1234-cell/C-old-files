#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;

	if(a==b){
		printf("b is greater");
	} else if (b==a){
		printf("a is greater");
	} else{
		printf("None of them");
	}

	return 0;
}
