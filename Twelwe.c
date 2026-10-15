#include <stdio.h>

int main()
{
    char a;

    printf("\nEnter value: ");
    scanf("%c", &a);

    printf("The ASCII value of %c is %d\n", a, a);

    if (a >= 97 && a <= 122)
    {
        printf("Lower case");
    }
    else if (a >= 65 && a <= 90)
    {
        printf("Upper case");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special");
    }

    return 0;
}