package Marvellous;

public class Factorial
{
    private int ivalue;
    
    public Factorial (int Val)
    {
        this.ivalue = Val;
    }

    public int NFactorial()
    {
        int iFact = 1;
        for (int iCnt = 1;iCnt <= ivalue;iCnt++)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
    }
}