import java.util.InputMismatchException;
import java.util.Scanner;
public class DivisionExample {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		try {
			System.out.print("Enter the first integer - ");
			int num1 = scanner.nextInt();
			System.out.print("Enter the second integer - ");
			int num2 = scanner.nextInt();
			int result = num1/num2;
			System.out.print("Result - " + result);
			} catch (InputMismatchException e) {
				System.out.println("Error: Please enter valid integers only.");
			} catch (ArithmeticException e) {
				System.out.println("Error: Dividde by zero is not allowed.");
			} catch (Exception e) {
				System.out.println("An unexpected error occured:" + e);
			} finally {
				scanner.close();
			}
		}
	}
				
