import java.util.*;
class Student {
	String name;
	int age;
	Student() {
		System.out.println("Default Constructor: Student created");
	}
	Student(String name) {
		this.name = name;
	System.out.println("Student Name: " + name);
	}
	Student(String name, int age) {
		this.name = name;
		this.age =age;
	System.out.println("Student Name: " + name + " Age: " + age);
	}
}
class ConstructorDemo {
	public static void main(String[] args) {
	Student s1 = new Student();
	Student s2 = new Student("Ram");
	Student s3 = new Student("Shaym",19);
	}
}
