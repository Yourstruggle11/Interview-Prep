# Question: swap-two-numbers

```c
#include<stdio.h>

int main(){
    int a = 2, b = 5;
    a = a + b; //7
    b = a - b; //2
    a = a - b; //5
    printf("%d %d",a, b);
    return 0;
}
```


**Output**

```
5 2
```
