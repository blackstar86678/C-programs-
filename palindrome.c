#include <stdio.h>

int main()
{
    int n, temp, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if(n == reverse)
        printf("%d is a Palindrome Number", n);
    else
        printf("%d is not a Palindrome Number", n);

    return 0;
}