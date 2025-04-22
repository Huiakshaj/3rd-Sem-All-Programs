import java.util.*;
interface Sports { 
	void play();
	void rules();
}
class Cricket implements Sports {
	public void play() {
		System.out.println("Playing Cricket");
	}
	public void rules() {
		System.out.println("Crickret Rules : 11 Players, Bat, Ball, and fielding.");
	}
}
class Football implements Sports {
	public void play() {
		System.out.println("Playing Football");
	}
	public void rules() {
		System.out.println("Football Rules : 11 Players, goalpost and ball.");
	}
}
class SportsDemo {
	public static void main(String args[]) {
		Cricket c =new Cricket();
		Football f=new Football();
		c.play();
		c.rules();
		f.play();
		f.rules();
	}
}
