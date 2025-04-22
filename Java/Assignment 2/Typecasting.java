import java.util.*;
class Typecasting {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        float floatvalue;
        double doublevalue;
        char charvalue='a';
        int intvalue4;
        System.out.println("Enter Float Value - ");
        floatvalue=sc.nextFloat();
        System.out.println("Enter Double Value - ");
        doublevalue=sc.nextDouble();
        System.out.println("Char Value - "+charvalue);
        System.out.println("Enter Int Value - ");
        intvalue4=sc.nextInt();
        int intvalue = (int) floatvalue;
        System.out.println("Float to int : " + intvalue);
        int intvalue2 = (int) doublevalue;
        System.out.println("Double to int : " + intvalue2);
        int intvalue3 = (int) charvalue;
        System.out.println("Character to int : " + intvalue3);
        char charvalue2 = (char) intvalue4;
        System.out.println("Int to character : " + charvalue2);
    }
}
