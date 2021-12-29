# Question: Display Fibonacci Sequence.

```c
# include<stdio.h>

int main(){
    int userInput, number1=0,number2=1,number3;

    printf("Please enter a number:\n");
    scanf("%d", &userInput);

    printf("Fibonacci Sequence is :\n");
    printf("%d %d ", number1,number2);
    for (int i = 2; i < userInput; i++)
    {
        number3 = number1 + number2;
        printf("%d ",number3);
        number1 = number2;
        number2 = number3;
        ;
    }
    

    return 0;
}
```

**Input**

```
8
```
**Output**

```
Fibonacci Sequence is :
0, 1, 1, 2, 3, 5, 8,
```
