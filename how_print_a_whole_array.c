#include <stdio.h>

int main()
{
    int numbers[] = {1 ,2 ,3 ,4 ,5 };
    int lenght = sizeof(numbers)/sizeof(numbers[0]);
    printf("The arry of numbers are: ");
    
    for(int i = 0;i<lenght; i++ )
    {
        printf("%d",numbers[i]);
    }

    return 0;
}
