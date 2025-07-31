import java.util.*;

class PatternPrint {
    private int iSize;

    public PatternPrint(int iNo) {
        this.iSize = iNo;
    }

    public void PatternNxN() {
        for (int i = 0; i < iSize; i++) {
            for (int j = 0; j < iSize; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}

class Pattern01 {
    public static void main(String Args[]) {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Pattern Size : ");
        iValue = sobj.nextInt();

        PatternPrint pobj = new PatternPrint(iValue);
        pobj.PatternNxN();

        sobj.close();

    }
}