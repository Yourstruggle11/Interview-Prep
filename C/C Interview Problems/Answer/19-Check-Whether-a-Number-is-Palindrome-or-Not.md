# Question: Check Whether a Number is Palindrome or Not.

```c
# include<stdio.h>

int main(){
    int userInput, reverseNumber=0,n;
    
    printf("Enter a Number: \n");
    scanf("%d", &userInput);
    n = userInput;
    while (n != 0)
    {
        int r =  n % 10;
        reverseNumber = reverseNumber * 10 + r;
        n = n / 10;
    }

    if(userInput == reverseNumber){
        printf("%d is a Palindrome Number", userInput);
    }
    else{
        printf("%d is not a Palindrome Number",userInput);
    }    
    return 0;
}
```
**Input**

 ```
121
 ```
**Output**

```
121  is a Palindrome Number
```