# Question: Generate Multiplication Table.
```c
# include<stdio.h>

int main(){
    int userInput;

    printf("Please enter a number:\n");
    scanf("%d", &userInput);

    printf("Table of %d is : -\n",userInput);

    for (int i = 1; i < 11; i++)
    {
       printf("%d X %d = %d\n", i,userInput,i*userInput);
    }
    

    return 0;
}
```

**Input**

```
5
```
**Output**

```
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```
