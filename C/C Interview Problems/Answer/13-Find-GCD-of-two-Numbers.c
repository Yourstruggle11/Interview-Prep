# include<stdio.h>

int main(){
    int userInputOne, userInputTwo,GCD;

    printf("Enter the first number:\n");
    scanf("%d", &userInputOne);
    printf("Enter the second number:\n");
    scanf("%d", &userInputTwo);

    for (int i = 1; i <= userInputOne && i <= userInputTwo; i++)
    {
        if(userInputOne%i == 0 && userInputTwo%i == 0){
            GCD = i;
        }
    }

    printf("The GCD of %d and %d is %d", userInputOne,userInputTwo,GCD);
    

    return 0;
}