#include <stdio.h>
#include <stdbool.h>
int CheckEvent(int iNo)
{
    if ((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Value : \n");
    scanf("%d", &iValue);

    bRet = CheckEvent(iValue);

    if (bRet == true)
    {
        printf("%d is an Even Number\n", iValue);
    }
    else
    {
        printf("%d is an odd Number \n", iValue);
    }
    return 0;
}