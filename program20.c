// Take the Percentage form user and print the passing class of the user
#include <stdio.h>
void Display(float fMarks)
{
    if ((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are fail ...\n");
    }
    else if ((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is pass class \n");
    }
    else if ((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your Class id second Class\n");
    }
    else if ((fMarks >= 60.00) && (fMarks < 70.00))
    {
        printf("Your class is first class \n");
    }
    else if ((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your Class is First class with Distinction\n");
    }
}
int main()
{
    float fValue = 0.0f;
    printf("Enter Percentage : ");
    scanf("%f", &fValue);

    Display(fValue);
    return 0;
}