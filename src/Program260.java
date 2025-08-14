import java.util.*;

public class Program260 {

    public static int CountCapital(String str) {
        int iCnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if ((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) {
                iCount++;
            }

        }
        return iCount;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        int iRet = 0;

        System.out.print("Enter Your name : ");
        str = sobj.nextLine();
        iRet = CountCapital(str);
        System.out.println("Number of Capital Letters : " + iRet);

        sobj.close();

    }

}

/* In java there is no '\0' at the end of the string like the C++ */
