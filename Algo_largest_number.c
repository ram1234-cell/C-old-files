#include <stdio.h>
//Writing a code that finds largest of these
int main(){
	int x = 1;
	int y = 3;
	int z = 4;
	int big;
	// Storing the value of the largest number
	big = x;
	if (y>big){
		big = y;
	}
	if (z<big){
		big = z;
	}
	//printing the value
	printf("%d",big);
	return 0;
}