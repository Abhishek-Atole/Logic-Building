#include<stdio.h>

//LOGICAL OR (||) -> IF ANY OF THR CONDITION IS TRUE THEN IT ENTERS INSIDE THE IF
//LOGICAL AND (&&) -> IF ALL OF THE CONDITION ARE TRUE THEN IT ENTERS INSIDE THE IF

void DisplayClass(float fMarks)
{
    //(Here the filter is used because if we write the invalid filter 
    //at the end of the if else ladder then it checks each and every condition.
    // so to avoid this we first check wheathe the input is valid or not )

    if((fMarks < 0.00) || (fMarks > 100.00))    //filter 
    {
        printf("Invalid Marks ......\n");
    }

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
    auto float fValue=0.0;
    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    return 0;
}