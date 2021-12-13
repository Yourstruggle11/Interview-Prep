# include<stdio.h>

int main(){
    int userInput;
    int factorial = 1;

    printf("Please Enter a positive integer:\n");
    scanf("%d", &userInput);

    for (int i = 1; i < userInput+1; i++)
    {
        factorial = factorial * i;
    }
    
    printf("FACTORIAL OF %d is = %d\n", userInput ,factorial);
    

    return 0;
}