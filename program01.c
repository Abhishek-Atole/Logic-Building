// Problem Statement : Accept Two values from ṭhe user and perform the addition
#include <stdio.h>
int main()
{
    int i, j, k = 0;

    printf("Enter the Value for the i:");
    scanf("%d", &i);

    printf("Enter the Value for the j:");
    scanf("%d", &j);

    k = i + j;

    printf("The Addition of the Two Values is k : %d", k);
    return 0;
}