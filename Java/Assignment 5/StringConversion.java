import java.util.*;
class StringConversion {
    String str;
    StringConversion() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number as a string : ");
        str = sc.next();
    }
    void convert() {
        Integer intvalue = Integer.parseInt(str);
        Double doublevalue = Double.parseDouble(str);
        System.out.println("Integer value : " + intvalue);
        System.out.println("Double value : " + doublevalue);
    }
    public static void main(String[] args) {
        StringConversion ob = new StringConversion();
        ob.convert();
    }
}
