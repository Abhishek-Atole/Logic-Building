import java.util.Scanner;;

public class Program245

{
    public static int Factorial(int ivalue) {
        int iFact = 1;
        int iCnt = 0;
        iCnt = 1;
        while (iCnt <= ivalue)
        {
            iFact = iFact * iCnt;
            iCnt++;
        }
        return iFact;
    }

    public static void main(String [] args)
    {
        Scanner sobj = new Scanner (System.in);

        int iNo = 0;
        int iRet= 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        
        iRet = Factorial(iNo);
        System.out.println("The Factorial of "+iNo + " is : " +iRet);
        sobj.close();


    }
}