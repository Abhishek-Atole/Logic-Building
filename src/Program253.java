import java.util.Scanner;

public class Program253 {
    public static int Addition(int Brr[]) {
        int iSum = 0;
        for (int iCnt = 0; iCnt < Brr.length; iCnt++) {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iRet = 0;
        System.out.print("Enter the Array Size : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements in the Array : ");
        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }
        iRet = Addition(Arr);
        System.out.println("The Addition of Array is : " + iRet);
        sobj.close();

    }

}
