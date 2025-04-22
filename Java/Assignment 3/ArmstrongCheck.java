import java.util.*;
class ArmstrongCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, original, remainder, sum = 0;
        System.out.println("Enter a number to check if it's an Armstrong number: ");
        num = sc.nextInt();
        original = num;
        while (num > 0) {
            remainder = num % 10;
            sum += (remainder * remainder * remainder);
            num = num / 10;
        }
        if (sum == original) {
            System.out.println(original + " is an Armstrong number.");
        } else {
            System.out.println(original + " is not an Armstrong number.");
        }
    }
}
