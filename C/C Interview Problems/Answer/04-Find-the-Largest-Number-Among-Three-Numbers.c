# include<stdio.h>

int main(){
    int userInputs[3];
    for (int i = 0; i < 3; i++)
    {
       printf("please enter the %d number\n", i+1);
       scanf("%d", &userInputs[i]);
    }

    if(userInputs[0] > userInputs[1] && userInputs[0] > userInputs[2]){
        printf("%d is Largest Among Three", userInputs[0]);
    }
    else if(userInputs[1] > userInputs[0] && userInputs[1] > userInputs[2]){
        printf("%d is Largest Among Three", userInputs[1]);
    }
    else{
        printf("%d is Largest Among Three", userInputs[2]);
    }
    return 0;
}