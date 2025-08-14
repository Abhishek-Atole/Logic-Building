package Marvellous;

public class Arithematic 
{
    private int iValue1;
    private int iValue2;
    
    // Constructor
    public Arithematic(int i, int j)
    {
        this.iValue1 = i;
        this.iValue2 = j;
    }
    
    // Addition method
    public int Addition()
    {
        return this.iValue1 + this.iValue2;
    }
    
    // Other arithmetic methods
    public int Subtraction()
    {
        return this.iValue1 - this.iValue2;
    }
    
    public int Multiplication()
    {
        return this.iValue1 * this.iValue2;
    }
    
    public int Division()
    {
        if(this.iValue2 != 0)
            return this.iValue1 / this.iValue2;
        else
            return 0;
    }
}
