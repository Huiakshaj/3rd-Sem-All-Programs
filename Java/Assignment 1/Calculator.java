import java.util.*;
class Calculator {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int x,y;
	System.out.println("Enter 2 numbers - ");
	x=sc.nextInt();
	y=sc.nextInt();
	int sum=x+y;
	int sub=x-y;
	int mul=x*y;
	int div=x/y;
	int modulus=x%y;
System.out.println("Sum is : "+ sum);
System.out.println("Sub is : "+ sub);
System.out.println("Mul is : "+ mul);
System.out.println("Div is : "+ div);
System.out.println("Mod is : "+ modulus);
}
}
