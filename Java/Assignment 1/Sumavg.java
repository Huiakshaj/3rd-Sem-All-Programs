import java.util.*;
class Sumavg {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int x,y,z,a,b;
	System.out.println("Enter the 5 numbers for sum and average -");
	x=sc.nextInt();
	y=sc.nextInt();
	z=sc.nextInt();
	a=sc.nextInt();
	b=sc.nextInt();
int sum=x+y+z+a+b;
int average=(x+y+z+a+b)/5;
System.out.println("Sum is : "+ sum);
System.out.println("Averagre is : "+ average);
}
}
