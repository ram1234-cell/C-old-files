#include <stdio.h>

int main()
{   int n;
    printf("Enter the number of n you want ");
    scanf("%d",&n);
    for(int i =0 ;i<n;i++)
    {   // print(i+1 star)
        for(int j =0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}