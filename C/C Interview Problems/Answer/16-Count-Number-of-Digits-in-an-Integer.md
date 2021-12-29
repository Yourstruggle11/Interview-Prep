# Question: Count Number of Digits in an Integer.

```c
#include <stdio.h>
 
int countDigit(int n)
{
    int count = 0;
    do
    {
        n = n / 10;
        ++count;
    }while (n != 0);
    return count;
}
 
int main(void)
{
    int userInput;

    printf("Enter a integer\n");
    scanf("%d", &userInput);
    printf("Number of digits : %d", countDigit(userInput));
    return 0;
}
```

**Input**

```
4561
```
**Output**

```
Number of digits : 4
```
