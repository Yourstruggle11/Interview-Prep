# Question: Reverse a Number.
```c
# include<stdio.h>

int main(){
    int userInput, reverseNumber=0,n;
    printf("Enter a number : \n");
    scanf("%d", &userInput);
    n = userInput;

    while (userInput != 0)
    {
        int r = userInput % 10;
        reverseNumber = reverseNumber * 10 + r;
        userInput = userInput / 10;
    }

    printf("Reverse number of %d is : %d",n, reverseNumber);
    
    
    return 0;
}
```

**Input**

```
1234
```
**Output**

```
Reverse number of 1234 is : 4321 
```
