#include <stdio.h>

void Pattern02(int iSize)
{
    for (int i = 0; i <= iSize; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the Size : ");
    scanf("%d", &iNo);
    Pattern02(iNo);
    return 0;
}