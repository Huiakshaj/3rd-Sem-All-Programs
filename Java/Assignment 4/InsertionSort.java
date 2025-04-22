import java.util.Scanner;
class InsertionSort {
	public static void main(String[] args) {
	       Scanner sc = new Scanner(System.in);
	       int n,i,j,temp;
	            System.out.println("Enter the number of elements - ");
	            n=sc.nextInt();
	            int arr[]=new int[n];
	            System.out.println("Enter " + n +" numbers - ");
	            	for (i =0; i < n -1; i++) {
	                arr[i] =sc.nextInt();
	            }
	            for (i=1; i < n; i++) {
	            int key = arr[i];
	            j = i - 1;
	            while ( j >=0 && arr[j] > key) {
	                 arr[ j + 1] = arr[j];
	                 j--;
	            }
	            arr[j + 1] = key;
	            }
	            System.out.println("The sorted elements are - ");
	             for(i=0; i < n; i++) {
	               System.out.print(arr[i]+" ");
	             }
	}
}	            
