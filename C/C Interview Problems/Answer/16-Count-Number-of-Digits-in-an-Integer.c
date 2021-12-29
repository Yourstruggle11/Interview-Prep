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
 
// Driver code
int main(void)
{
    int userInput;

    printf("Enter a integer\n");
    scanf("%d", &userInput);
    printf("Number of digits : %d", countDigit(userInput));
    return 0;
}