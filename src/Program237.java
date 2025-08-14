import java.util.*;

public class Program237 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        int iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter the First number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addition is : " + iAns);

        sobj.close();
    }

}
