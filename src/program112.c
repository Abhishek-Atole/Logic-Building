// Pattern Printing
// iRow = 3
// iColumn = 4
/*
    1   1   1   1
    1   1   1   1
    1   1   1   1
*/

#include <stdio.h>

void Display(int iRow, int iColumn)
{
    {
        int i, j = 0;
        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iColumn; j++)
            {
                if (i == j )
                {
                    printf("#\t");                    
                }
                else if (i > j)
                {
                    printf("*\t");
                }
                else
                {
                    printf("$\t");
                }
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