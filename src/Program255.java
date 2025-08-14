import java.util.*;

public class Program255 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.print("Enter Your name : ");
        str = sobj.nextLine();

        System.out.println("Your name is : " + str);
        System.out.println("Your name is : " + str.length());
        sobj.close();

    }

}
