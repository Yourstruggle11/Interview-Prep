# include<stdio.h>

int main(){
    int userInput;

    printf("Please enter a number:\n");
    scanf("%d", &userInput);

    printf("Table of %d is : -\n",userInput);

    for (int i = 1; i < 11; i++)
    {
       printf("%d X %d = %d\n", i,userInput,i*userInput);
    }
    

    return 0;
}