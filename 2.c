# include <stdio.h>
int main(){
    int num;
  //Print mutliplicaation table entere d by the user
    // INPUT :6
    //OUTPU:write the mutlipliacetion table for 6
    
    printf("Enrter value");
    scanf("%d", &num);
    printf("The mutliplication table of the number you entered is :",num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d/n",num,i,i*num);
    }
    return 0;
}
