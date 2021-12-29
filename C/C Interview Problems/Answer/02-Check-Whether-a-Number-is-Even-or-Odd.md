# Question: Check Whether a Number is Even or Odd.
```c
# include<stdio.h>

int main(){
    int userInput;
    printf("Enter a number :\n");
    scanf("%d", &userInput);

    if(userInput % 2 == 0){
    printf("%d is an even number\n", userInput);
    }
    else{
    printf("%d is an odd number\n", userInput);
    }
    return 0;
}
```



**Input**

```
10
```

**Output**

```
10 is an even number
```
