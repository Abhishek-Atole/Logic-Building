import java.util.Scanner;;

public class Program244

{
    public static int Factorial(int ivalue) {
        int iFact = 1;
        for (int iCnt = 1; iCnt <= ivalue; iCnt++) {
            iFact = iFact * iCnt;
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