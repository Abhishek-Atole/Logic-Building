import java.util.*;

public class Program251 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in); // Scanner is used to take and record the raw input form the keyboard

        int iSize = 0;
        System.out.println("Enter the Number : ");
        iSize = sobj.nextInt(); // Storethe keyboard inputs in the iSize variable

        int Arr[] = new int[iSize]; // Dynamically Allocte the memory for the iSize elements of array
        System.out.println("Enter the elements : ");

        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt(); // Store the Data in the Array
        }
        System.out.println("Elements of the Array : ");
        for (int iCnt = 0; iCnt < iSize; iCnt++) {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
        sobj.close();

    }

}
