#include <stdio.h>

// Function 1
void my_funtion_one(){
    printf("a is smaller");
}

//Function 2

void my_function_two(){

    printf("b is bigger");
}


int main(){
    int a = 1;
    int b = 2;
    if (a<b){
        my_funtion_one();
    }   
    return 0;
    
        
    

}