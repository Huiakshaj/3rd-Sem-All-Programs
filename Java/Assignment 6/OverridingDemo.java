import java.util.*;
class Animal {
	void makeSound() {
	System.out.println("Animal makes a sound");
	}
}
class Dog extends Animal {
	void makeSound() {
	System.out.println("Dog Barks!");
	}
}
class Cat extends Animal {
	void makeSound() {
	System.out.println("Cat meows!");
	}
}
class OverridingDemo {
	public static void main(String[] args) {
	Animal a = new Animal();
	Animal d = new Dog();
	Animal c = new Cat();
	a.makeSound();
	d.makeSound();
	c.makeSound();
	}
}
