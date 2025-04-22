import java.util.*;
class Constructor {
	int q; 
	Constructor() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the value of the default constructor : ");
		q=sc.nextInt();
	}
		Constructor(int s) {
		q=s;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Constructor ob=new Constructor();
		System.out.print("Enter the value of the parameterized constructor : ");
		int val=sc.nextInt();
		Constructor obj=new Constructor(val);
		System.out.println("Value of Object 1 : "+ob.q);
		System.out.println("Value of Object 2 : "+obj.q);
	}
}
