import java.util.*;
class Swap {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int x,y;
	int temp;
	System.out.println("Enter the two integers - ");
	x=sc.nextInt();
	y=sc.nextInt();
	temp=x;
	x=y;
	y=temp;
System.out.println("After Swapping : "+ x +" "+ y);
}
}
