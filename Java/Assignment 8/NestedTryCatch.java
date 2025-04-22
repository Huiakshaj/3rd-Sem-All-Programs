public class NestedTryCatch {
	public static void main(String[] args) {
	int[] arr = {10,20,30};
	try {
	System.out.println("Accessing array element at index 5 ...");
	int value = arr[5];
	try {
	System.out.println("Performing Division . . .");
		int result = value / 0;
	System.out.println("Result - " + result);
	} catch (ArithmeticException e) {
		System.out.println("Inner Catch: Cannot divide by zero.");
	}
	} catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Outer Catch: Array index is out of bounds.");
        }
        System.out.println("Program continues . . . ");
        }
}        
