import java.util.*;
class SortDescending {
	public static void main(String[] args) {
	       Scanner sc = new Scanner(System.in);
	       int n,i,j,temp;
	            System.out.println("Enter the number of elements to sort in descending order - ");
	            n=sc.nextInt();
	            int arr[]=new int[n];
	            System.out.println("Enter " + n +" numbers - ");
	            for (i =0; i < n -1; i++) {
	                arr[i] =sc.nextInt();
	            }
	            for (i = 0; i < n -1; i++) {
	               for (j = i + 1; j < n; j++) {
	               if(arr[i] < arr[j]) {
	                 temp = arr[i];
	                 arr[i] = arr[j];
	                 arr[j] = temp;
	               }
	            }
	         }
	         System.out.println("The sorted aaray in descending order - ");
	               for(i=0; i < n; i++) {
	               System.out.print(arr[i]+" ");
	               }
	         }
}
