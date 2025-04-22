import java.util.*;
class AvgArray {
	public static void main(String[] args) {
	       Scanner sc = new Scanner(System.in);
	       int n, sum = 0;
	       System.out.println("Enter the number of elements ");
	       n =sc.nextInt();
	       int arr[] = new int[n];
	       System.out.println("Enter " + n +" numbers - ");
	       for (int i = 0; i < n; i++) {
	       	   arr[i] =sc.nextInt();
	       	   sum +=arr[i];
	       }
	       float average = (float) sum/n;
	       System.out.println("The average is - " + average);
	}
}	       
