import java.util.Scanner;

public class Program278 {

    public static int ToggleBit(int iNo) {
        int iMask = 0x00000040;
        int iResult = 0;
        iResult = iNo ^ iMask; // Doing And opration on iNo and iMask

        return iResult;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);
        System.out.println("Updated Number is : " +iRet);
        sobj.close();
    }
}
