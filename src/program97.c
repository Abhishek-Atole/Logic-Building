#include <stdio.h>

void Display()
{
    int i, j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display();
    return 0;
}