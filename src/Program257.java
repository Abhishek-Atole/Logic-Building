import java.util.*;

public class Program257 {

    public static void Display(String str) {
        for (int iCnt = 0; iCnt < str.length(); iCnt++) {
            System.out.println(str.charAt(iCnt));
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
