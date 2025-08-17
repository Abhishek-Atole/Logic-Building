import java.util.*;

public class Program264 {
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iMask = 4;
        int iResult = 0;

        iNo = sobj.nextInt();
        iResult = iNo & iMask;

        if (iResult == iMask) {
            System.out.println("3rd Bit is ON");
        } else {
            System.out.println("3rd bit is OFF");
        }
        sobj.close();
    }


}


/*
    Write the Program to check that the the Particular bit is on or off 

    Approach =  We are using the mask here to and teh & operation because in and opration if bots bits are 1 then and then only the bit is 1 (ON)

 *  Input       1   0   0   0               = 8 
 *  Mask        0   1   0   0               = 4         & (Operation)
 * ----------------------------------------------------
 *              0   0   0   0                       
 * Here the Third bit is Off 
 * 
 * 
 *  Input       1   0   0   0   1   1   1   1                           = 143 
 *  Mask        0   0   0   0   0   1   0   0      & (Operation)        = 4        
 * ----------------------------------------------------
 *              0   0   0   0   0   1   0   0                       
 * Here the Third bit is ON
 * 
 */