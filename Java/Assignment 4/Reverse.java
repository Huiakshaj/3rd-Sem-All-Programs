import java.util.*;
class Reverse {
	public static void main(String[] args) {
	       Scanner sc = new Scanner(System.in);
	       String word, rev ="";
	       System.out.println("Enter a word to reverse - ");
	       word = sc.next();
	       int length = word.length();
	       for (int i = length - 1; i >=0; i--) {
	          rev = rev +word.charAt(i);
	       }
	       System.out.println("The reversed word is - " + rev);
	}
}	       		
