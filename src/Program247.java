import java.util.*;

public class Program247 {

    public static void Even_Odd_Factor_Addition(int ivalue) {
        int iCnt = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        for (iCnt = 1; iCnt <= ivalue; iCnt++) {
            if ((ivalue % iCnt) == 0) {
                if ((iCnt % 2) == 0) {
                    iSumEven = iSumEven + iCnt;
                    System.out.println("Even factor : " + iCnt);

                } else {
                    iSumOdd = iSumOdd + iCnt;
                    System.out.println("Odd factor : " + iCnt);

                }
            }
        }System.out.println(" ");
        System.out.println("Additon of Even Factors : " + iSumEven);
        System.out.println("Additon of Odds Factors : " + iSumOdd);

    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();
        Even_Odd_Factor_Addition(iNo);
        sobj.close();
    }

}
