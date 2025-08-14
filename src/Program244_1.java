import Marvellous.Factorial;
import java.util.Scanner;

public class Program244_1 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        Factorial fobj = new Factorial(iNo);
        System.out.println("Factorial is : " + fobj.NFactorial());
        sobj.close();
    }
}
