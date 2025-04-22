import java.util.*;
class SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, sum = 0, remainder;
        System.out.println("Enter a number to find the sum of its digits: ");
        num = sc.nextInt();
        while (num > 0) {
            remainder = num % 10;
            sum += remainder;
            num = num / 10;
        }
        System.out.println("The sum of digits is: " + sum);
    }
}
