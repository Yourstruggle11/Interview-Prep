# Question: Check Whether a Number is Positive or Negative.
```c
# include<stdio.h>

int main(){
    int userInput;

    printf("Enter a number:\n");
    scanf("%d", &userInput);

    if(userInput == 0){
        printf("%d is a nonpositive natural number", userInput);
    }
   else if(userInput > 0){
        printf("%d is a positive number", userInput);
    }
    else{
        printf("%d is not a positive number", userInput);
    }
    return 0;
}
```

**Input**

```
45
```

**Output**

```
45 is a positive number.
```
