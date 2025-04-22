import java.util.*;
class SortInAlphabeticalOrder {
	public static void main(String[] args) {
	       Scanner sc = new Scanner(System.in);
	        String word ="";
	        System.out.println("Enter a word to sort in alphabetical order - ");
	        word=sc.next();
	        char[] chars =word.toCharArray();
	        int length=chars.length;
	        for (int i = 0; i < length - 1; i++){
		   for(int j = i + 1; j < length; j++) {
		      if (chars[i] > chars[j]) {
		      char temp = chars[i];
		      chars[i] = chars[j];
		      chars[j] = temp;
		      }
		   }
		}
		String sortedWord= new String(chars);
		System.out.println("The sorted word is - " + sortedWord);
	}
}
