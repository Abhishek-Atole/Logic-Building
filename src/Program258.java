import java.util.*;

public class Program258 {

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.print("Enter Your name : ");
        str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.print(iCnt);
        }

        sobj.close();

    }

}


/*In java there is no '\0' at the end of the string like the C++ */
