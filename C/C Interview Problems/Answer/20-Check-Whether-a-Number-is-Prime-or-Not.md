# Question: Check Whether a Number is Prime or Not.

```c
# include<stdio.h>

int main(){
    int userInput,count=0;
    printf("Enter a number: \n");
    scanf("%d", &userInput);

    for (int i = 2; i < userInput; i++)
    {
        if(userInput % i == 0){
            count++;
        }
    }

    if(count > 0){
        printf("%d is not a Prime Number", userInput);
    }
    else{
        printf("%d is a Prime Number", userInput);
    }
    
    return 0;
}
```


**Input**

 ```
97
 ```
**Output**

```
97 is a Prime Number
```