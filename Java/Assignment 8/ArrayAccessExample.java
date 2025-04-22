import java.util.Scanner;
public class ArrayAccessExample {
	public static void main(String[] args) {
	int[] arr = {10,20,30,40,50};
	Scanner scanner = new Scanner (System.in);
	try {
		System.out.print("Enter an index (0 to 4):");
		int index = scanner.nextInt();
		System.out.println("Value at index " + index + " is:" + arr[index]);
	} catch (ArrayIndexOutOfBoundsException e) {
		System.out.println("Error: Index out of bounds! Please enter a value between 0 and 4.");
	} finally {
		scanner.close();
	}
	}
}
