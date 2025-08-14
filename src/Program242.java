import java.util.*;

class Arithematic 
{
    private int ivalue1;
    private int ivalue2 ;

    public Arithematic(int A,int B)
    {
        this.ivalue1 = A;
        this.ivalue2 = B;
    }

    public int Addition()
    {
        int iSum = 0;
        iSum = ivalue1 + ivalue2;
        return iSum;
    }

}

public class Program242
{
    public static void main(String[] args)
    {
        /* Scanner is used to take the raw inut form the keyboard and convert it into the keys (Data) for input and store it into the sobj.
         * System.in = is used to take the raw input form keyboard.
         * Scanner = Convert that raw input into understandable formaṭ.
        */
        
        Scanner sobj = new Scanner(System.in);     // Scanner Class to take the input

        int iNo1 = 0;
        int iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter the First Number : ");
        
        /* The Taken Input form the keyboard is stored into the sobj and that data is fectched form the object and assigned to the iNO1
         * nextINT(); =  the data type is Integere thats why it is Integer.
         */
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);

        iAns = aobj.Addition();
        System.out.println("The Addition is : "+ iAns);
        
        sobj.close();               // this is mandetory to free or close the resourse conncetion that is in used for taking input after the use.

    }
}