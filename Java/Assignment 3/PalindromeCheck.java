import java.util.*;
class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, original, reverse = 0, remainder;
        System.out.println("Enter a number to check if it's a palindrome: ");
        num = sc.nextInt();
        original = num;
        while (num > 0) {
            remainder = num % 10;
            reverse = (reverse * 10) + remainder;
            num = num / 10;
        }
        if (original == reverse) {
            System.out.println(original + " is a palindrome.");
        } else {
            System.out.println(original + " is not a palindrome.");
        }
    }
}
