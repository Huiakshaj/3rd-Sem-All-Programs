import java.util.*;
class Areaperi {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int length,breadth;
	System.out.println("Enter the Length and breadth of Rectangle - ");
	length=sc.nextInt();
	breadth=sc.nextInt();
int peri=2*(length+breadth);
System.out.println("The perimetre of the rectangle is : " + peri + " metre.");
int area=(length*breadth);
System.out.println("The area of the rectangle is : "+ area + " metre sq.");
	int radius;
	System.out.println("Enter the radius of the circle - ");
	radius=sc.nextInt();
double carea=(3.14*radius*radius);
System.out.println("The area of the circle is : "+ carea + " metre sq.");
double cperi=(2*3.14*radius);
System.out.println("The perimetre of the circle is : "+ cperi + " metre");
}
}
