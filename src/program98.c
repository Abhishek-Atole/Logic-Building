#include <stdio.h>

void Display(int iRow, int iColumn)
{
    {
        int i, j = 0;
        for (i = 0; i < iRow; i++)
        {
            for (j = 0; j < iColumn; j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    printf("Enter the Number of Row : ");
    scanf("%d", &iNo1);
    printf("Enter the Number of Column : ");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);
    return 0;
}