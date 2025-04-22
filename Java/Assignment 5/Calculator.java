import java.util.*;
class Calculator {
	Integer num1,num2;
	Calculator() {
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter the first number : ");
	num1=sc.nextInt();
	System.out.print("Enter the second number : ");
	num2=sc.nextInt();
	}
	void performCalculations() {	
		System.out.println("Addition : "+ (num1 + num2));
		System.out.println("Subtraction : "+ (num1 - num2));
		System.out.println("Multiplication : "+ (num1 * num2));
		System.out.println("Division : "+ (num1 / num2));
	}
	public static void main(String[] args) {
		Calculator ob= new Calculator();
		ob.performCalculations();
	}
}

