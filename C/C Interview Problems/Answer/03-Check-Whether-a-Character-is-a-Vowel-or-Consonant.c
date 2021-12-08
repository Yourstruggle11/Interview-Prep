# include<stdio.h>

int main(){
    char vowelArr[10] = {'a', 'e', 'i','o','u','A','E','I','O','U'};
    char userInput;
    int counter = 0;
    printf("Enter a single character :\n");
    scanf("%c", &userInput);

    for (int i = 0; i < 10; i++){
       if(vowelArr[i] == userInput){
           counter++;
       }
    }

    if(counter > 0){
        printf("%c is a Vowel\n", userInput);
    }
    else{
        printf("%c is not a Vowel\n", userInput);
    }
    
    return 0;
}