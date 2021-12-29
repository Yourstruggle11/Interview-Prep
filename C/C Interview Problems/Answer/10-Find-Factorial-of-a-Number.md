# Question: Find Factorial of a Number.
```c
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
    
    printf("FACTORIAL OF %d IS = %d\n", userInput ,factorial);
    

    return 0;
}
```

**Input**

```
3
```
**Output**

```
FACTORIAL OF 3 IS 6
```
