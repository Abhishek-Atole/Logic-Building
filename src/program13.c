#include <stdio.h>
long int CaluculateCube(int iNo)
{
    long int iAns = 0;
    iAns = iNo * iNo * iNo;
    return iAns;
}

int main()
{
    auto int iValue = 0;
    auto long int iCube = 0;
    printf("Enter the Value :");
    scanf("%d", &iValue);

    iCube = CaluculateCube(iValue);
    printf("The Cube is :%ld", iCube);
    return 0;
}

