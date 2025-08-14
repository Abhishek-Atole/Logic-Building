import java.util.*;

public class Program259 {

    public static void Display(String str) {
        char Arr[] = str.toCharArray();
        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.print(iCnt);
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.print("Enter Your name : ");
        str = sobj.nextLine();
        Display(str);

        sobj.close();

    }

}

/* In java there is no '\0' at the end of the string like the C++ */
