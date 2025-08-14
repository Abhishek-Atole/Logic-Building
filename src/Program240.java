import java.util.Scanner;

public class Program240
{
    public static int Addition(int ivalue1,int ivalue2)
    {
        int iSum = 0;
        iSum = ivalue1 + ivalue2;
        return iSum;
    }
    
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        int iNo2 = 0;
        int iAns = 0;

        System.out.println(" Enter the First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iNo2 = sobj.nextInt();

        iAns  = Addition(iNo1,iNo2);
        System.out.println("Addition is : " +iAns);
        sobj.close();
    }
}