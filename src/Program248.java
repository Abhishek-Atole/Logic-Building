import java.util.Scanner;

public class Program248 {
    public static void Display(int iValue) {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iValue; iCnt++) {
            System.out.print(iCnt + "\t" + "*\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();
        Display(iNo);
        sobj.close();
    }
}