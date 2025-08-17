import java.util.Scanner;

public class Program263 {
    public static void main(String [] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.print("Enter Decimal Number : ") ;       
        
        iNo = sobj.nextInt();

        while(iNo != 0 )            // This loop Executes till the iNo is getting 0
        {
            iDigit = iNo % 2;       // Here the Remainder is stored in the iDigit Variable 
            iNo = iNo / 2;          // Here the original Division happens and stored in the iNo.
            if (iDigit == 1)
            {
                iCnt++;
            }
        
        }
        System.out.println("Number of 1 bit are : "+iCnt);
        
        sobj.close();
    }

    
}
