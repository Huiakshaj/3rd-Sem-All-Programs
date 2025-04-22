import java.util.*;
class Calculator {
	int add(int a, int b) {
		return a+b;
	}
	double add(double a, double b) {
		return a+b;
	}
	int add(int a,int b,int c){
		return a+b+c;
	}
}
public class OverloadingDemo {
	public static void main(String[] args) {
	Calculator c = new Calculator();
	System.out.println("Sum (int):" + c.add(5,10));
	System.out.println("Sum (double):" + c.add(5.2,2.5));
	System.out.println("Sum (three ints):" + c.add(5,10,3));
	}
}
