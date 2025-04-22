import java.util.InputMismatchException;
import java.util.Scanner;
public class MultipleCatchExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numerator = 0, denominator = 1;
        String str = "";
        int[] arr = {1, 2, 3};
        try {
            System.out.print("Enter numerator: ");
            numerator = scanner.nextInt();
            System.out.print("Enter denominator: ");
            denominator = scanner.nextInt();
            scanner.nextLine(); 
            System.out.print("Enter a number string to parse: ");
            str = scanner.nextLine();
            int result = numerator / denominator;
            System.out.println("Result of division: " + result);

            System.out.println("Array element at index 5: " + arr[5]);
            int parsed = Integer.parseInt(str);
            System.out.println("Parsed number: " + parsed);
        } catch (ArithmeticException e) {
            System.out.println("Caught ArithmeticException: Cannot divide by zero.");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught ArrayIndexOutOfBoundsException.");
        } catch (NumberFormatException e) {
            System.out.println("Caught NumberFormatException: Invalid number string = " + str);
        } catch (InputMismatchException e) {
            System.out.println("Caught InputMismatchException: Please enter valid integers.");
        } catch (Exception e) {
            System.out.println("Caught Unexpected Exception:");
            e.printStackTrace();
        } finally {
            scanner.close();
        }
    }
}
