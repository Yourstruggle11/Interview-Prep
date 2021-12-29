# Question: Calculate the Sum of Natural Numbers.
```c
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
       printf("SUM OF THE %d IS = %d\n", userInput ,sum);
    

    return 0;
}
```

**Input**

```
3
```
**Output**

```
SUM OF THE 3 IS 6
```
