# Question: Check Leap Year.
```c
# include<stdio.h>

int main(){
    int userInput;
    printf("Enter a year:\n");
    scanf("%d", &userInput);

    if((userInput % 4 == 0) && (userInput % 100 != 0) || (userInput % 400 == 0)){
        printf("%d is a Leapyear", userInput);
    }
    else{
        printf("%d is not Leapyear", userInput);
    }

    return 0;
}
```

**Input**

```
2020
```
**Output**

```
2020 is a Leapyear.
```
