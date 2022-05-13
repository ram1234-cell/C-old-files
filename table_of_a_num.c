#include <stdio.h>

int main()
{   int num;
    printf("enter the value");
    scanf("%d",&num);
    for(int i = 1;i<11;i++)
    {
        printf("%d X %d = %d\n",num ,i,i*num);
    }

    return 0 ;
}