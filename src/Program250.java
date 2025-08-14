import java.util.*;

public class Program250 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the Number : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            System.out.print(Arr[iCnt] + "\t");
        }
        sobj.close();

    }

}
