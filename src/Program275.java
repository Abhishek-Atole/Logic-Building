import java.util.Scanner;

public class Program275 {
    
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000008;
        int iResult = 0;
        
        iResult = iNo & iMask;

        if(iResult == iMask)          // 4th bit is oFF
        {
            return(iNo ^ iMask);
        }
        else            // 4th Bit is oFF
        {
            return iNo;
        }
    }

    public static void main(String [] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0 ;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated Number is : " +iRet);
        sobj.close();
    }
}


/*  Turn on the 4th bit if the bit is 
 *  iNo = 889
 * 
 *  Input :     1   1   0   1   1   1   1   0   0   1
 *  Mask :      0   0   0   0   0   0   1   0   0   0       ^(XOR)
 * ----------------------------------------------------------------------
 * Result :     1   1   0   1   1   1   0   0   0   1   
 * 
 * Here,
 *      AND opration and or oprationcant be used.
 * 
 * iNo= 98
 * 
 *  Input =  1  1   0   0   0   1   0
 *  Mask =   0  0   0   1   0   0   0       ^
 * ---------------------------------------------
 * Result =  1  1   0   1   0   1   0    
 * 
 */