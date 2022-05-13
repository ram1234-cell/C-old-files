#include <stdio.h>

int main()
{
    int n,counter = 0;
    printf("Enter thenumber ");
    scanf("%d",&n);
    if (n==0)
        printf("There is only one digit");
    

    while (n!=10)
    {
        n = n/10;
        counter++;

    }
    {
    printf("Number of digits in your code is :  \n");
    return 0 ;
    }
    
}