# Question: Check Whether a Character is an Alphabet or not.

```c
# include<stdio.h>
#include <ctype.h>

int main(){
    char userInput;

    printf("Please enter a character:\n");
    scanf("%c", &userInput);

    if(isalpha(userInput)){
        printf("%c is  an Alphabet:\n", userInput);
    }
    else{
        printf("%c is  not an Alphabet:\n", userInput);
    }
    return 0;
}
```

**Input**

```
45
```
**Output**

```
45 is not an Alphabet.
```
