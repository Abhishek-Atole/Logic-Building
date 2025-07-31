#include <stdio.h>

void PatternNxN(int iNO)
{
    for (int i = 0; i < iNO; i++)
    {
        for (int j = 0; j < iNO; j++)
        {
            printf(" * ");
        }printf("\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Size : ");
    scanf("%d", &iValue);
    PatternNxN(iValue);
    return 0;
}