# Question: Find LCM of two Numbers.

```c
# include<stdio.h>

int main(){
    int userInputOne, userInputTwo,max;

    printf("Enter the first number:\n");
    scanf("%d", &userInputOne);
    printf("Enter the second number:\n");
    scanf("%d", &userInputTwo);

     max = userInputOne < userInputTwo ? userInputTwo : userInputOne;
    while (1)
    {
       if(max % userInputOne == 0 && max % userInputTwo == 0){
            printf("The LCM of %d and %d is %d", userInputOne,userInputTwo,max);
            break;
       }
       max++;
    }
    



    

    return 0;
}
```

**Inout**

```
6 9
```
**Output**

```
The LCM of 6 and 9 is 18
```
