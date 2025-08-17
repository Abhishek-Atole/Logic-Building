import java.util.Scanner;

public class Program269 {

    public static boolean CheckBit(int iNo) {
        int iMask = 260;
        int iResult = 0;
        iResult = iNo & iMask;
        if (iResult == iMask) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the No : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);

        if (bRet == true) {
            System.out.println("3rd and 9th Bit is ON");
        } else {
            System.out.println("3rd and 9th bit is OFF");
        }
        sobj.close();

    }

}

/* 
 * If the User says to chekc the 7th bit then : 2^6
 */
