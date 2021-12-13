# include<stdio.h>

int main(){
    int userInput;
    int sum = 0;

    printf("Please Enter a positive integer:\n");
    scanf("%d", &userInput);

    for (int i = 1; i < userInput+1; i++)
    {
        sum = sum + i;
    }
       printf("SUM OF THE %d is = %d\n", userInput ,sum);
    

    return 0;
}