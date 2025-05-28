#include <stdio.h>

int ConvertSmall(char Cvalue)
{
    return (Cvalue + 32);
}

int main()
{
    char Ch = '\0';
    int iRet = 0;
    printf("Enter the Character : ");
    scanf("%c", &Ch);
    iRet = ConvertSmall(Ch);
    printf("Converted Capital Letter is : %c", iRet);

    return 0;
}


// In teh ASCII Table the Capital Lettes Start Form The 65 and and the Small Letters form 96 so the gap between the same latter is 32.