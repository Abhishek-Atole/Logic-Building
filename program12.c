#include <stdio.h>
int CaluculateCube(int iNo)
{
    int iAns = 0;
    iAns = iNo * iNo * iNo;
    return iAns;
}

int main()
{
    auto int iValue = 0;
    auto int iCube = 0;
    printf("Enter the Value :");
    scanf("%d", &iValue);

    iCube = CaluculateCube(iValue);
    printf("The Cube is :%d", iCube);
    return 0;
}

