import java.util.Scanner;

public class Program262 {
    public static void main(String [] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;

        System.out.print("Enter Decimal Number : ") ;       
        
        iNo = sobj.nextInt();

        while(iNo != 0 )            // This loop Executes till the iNo is getting 0
        {
            iDigit = iNo % 2;       // Here the Remainder is stored in the iDigit Variable 
            iNo = iNo / 2;          // Here the original Division happens and stored in the iNo.
            System.out.println(iDigit);
        }
        System.out.println();
        
        sobj.close();
    }

    
}
