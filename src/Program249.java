import java.util.*;

public class Program249 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the Number : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();

    }

}
