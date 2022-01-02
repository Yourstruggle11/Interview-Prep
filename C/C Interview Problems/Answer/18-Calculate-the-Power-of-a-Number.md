 # Question: Calculate the Power of a Number.

```c
# include<stdio.h>
# include<math.h>

int main(){
    int userInput, power, result;
    printf("Enter a number: \n");
    scanf("%d", &userInput);
    printf("Enter enter the power of the number:\n");
    scanf("%d", &power);

    result = pow(userInput,power);

    printf("%d to the Power of %d is %d", userInput,power,result);
    return 0;
}
```

 
**Input**

 ```
 3 3
 ```
**Output**

```
3 to the Power of 3 is 27
```