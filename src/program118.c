// Program to calculate the Character is capital or Small
#include <stdio.h>
#include <stdbool.h>

bool Capital(char Cvalue)
{
    if ((Cvalue >= 65) && (Cvalue <= 95))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Ch = '\0';
    bool iRet = false;
    printf("Enter the Character : ");
    scanf("%c", &Ch);
    iRet = Capital(Ch);
    if (iRet == true)
    {
        printf("%c is the Capital Letter.", Ch);
    }
    else
    {
        printf("%c is Small Letter.", Ch);
    }
    return 0;
}