import java.util.Scanner;;

public class Program246

{
    public static void EvenOddFactors(int ivalue) {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= ivalue; iCnt++) {
            if ((ivalue % iCnt) == 0) {
                if ((iCnt % 2) == 0) {
                    System.out.println("Even factor : " + iCnt);
                } else {
                    System.out.println("Odd Factor : " + iCnt);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        EvenOddFactors(iNo);

        sobj.close();

    }
}