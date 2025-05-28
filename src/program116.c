#include <stdio.h>

int main()
{
    char Ch = '\0';
    printf("Enter the Number Charcter  : ");
    scanf("%c", &Ch);

    printf("ASCII value of the Character in Decimal  : %d\n", Ch);
    printf("ASCII value of the Character in Octal  : %o\n", Ch);
    printf("ASCII value of the Character in Hexadecimal  : %x\n", Ch);
    return 0;
}