#include <stdio.h>

int main() {
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(int i = 1; i <= number; i++)
    {
        count = count + 1;
    }
    if (number%5 == 0)
    {
        printf("Divisible by 5\n");
    }
    if (number%7 ==0)
    {
        printf("Divisible by 7\n");
    }
    
    printf("Count is %d", count);
    
    

    return 0;
}
