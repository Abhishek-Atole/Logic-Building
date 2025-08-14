import java.util.Scanner;

public class Program252 {
    public static void Display(int Brr[]) {
        for (int iCnt = 0; iCnt < Brr.length; iCnt++) {
            
            System.out.print(Brr[iCnt] +"\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.print("Enter the Array Size : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements in the Array : ");
        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }
        Display(Arr);

        sobj.close();

    }

}
