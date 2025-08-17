import java.util.Scanner;

public class Program276 {

    public static int OffBit(int iNo) {
        int iMask = 0x00000400;
        int iResult = 0;
        iResult = iNo & iMask;          // Doing And opration on iNo and iMask

        if (iResult == iMask)           // if the 11th Bit is on 
        {     
            return (iNo ^ iMask);       // XOR operation
        } 
        else                            // 11th Bit is Off
        {
            return iNo;
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated Number : " + iRet);
        sobj.close();
    }
}
