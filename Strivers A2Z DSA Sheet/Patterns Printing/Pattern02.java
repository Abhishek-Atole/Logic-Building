import java.util.*;

class Pattern02Nxn
{
    private int iSize = 0;

    public Pattern02Nxn(int iNo)
    {
        this.iSize = iNo;
    }

    public void Pattern02Print()
    {
        for(int i = 0; i< iSize;i++)
        { 
            for (int j = 0;j<= i;j++)
            {
                System.out.print("*\t");
            }System.out.println();
        }
    }
}

class Pattern02 {
    public static void main(String Args[]) {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the iValue : ");
         iValue = sobj.nextInt();

        Pattern02Nxn pobj = new Pattern02Nxn(iValue);
        pobj.Pattern02Print();
        sobj .close();

    }

}
