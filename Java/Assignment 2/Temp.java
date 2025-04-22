import java.util.*;
class Temp {
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int celcius;
	System.out.println("Enter the temperature in Celcius : ");
	celcius=sc.nextInt();
float farenheit;
farenheit=(celcius*9/5) + 32;
System.out.println("Temperature in farenheit : "+ farenheit);
}
}
