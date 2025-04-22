public class NullPointerExample {
	public static void main(String[] args) {
		String str = null;
		try {
		int len = str.length();
		System.out.println("Length of the string:" + len);
		} catch (NullPointerException e) {
		System.out.println("Error: Cannot find length of a null string.");
		}
	}
}
