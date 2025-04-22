import java.util.Scanner;
class Person{
  String name;
  int age;
  public Person(String name,int age){
  this.name = name;
  this.age = age;
}
  public void display(){
      System.out.println("Name : "+ name + ", Age : "+ age);
      }
  }
class Student extends Person{
   String studentid;
    public Student(String name,int age,String studentid){
    super(name,age);
    this.studentid = studentid;
    }
    public void display(){
    super.display();
    System.out.println("Student ID - "+studentid);
    }
 }
 public class Fields{
 public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 System.out.println("Enter name -");
 String name = sc.nextLine();
 System.out.println("Enter age - ");
 int age = sc.nextInt();
 sc.nextLine();
 System.out.println("Enter StudentID - ");
 String studentid = sc.nextLine();
 Student student = new Student(name,age,studentid);
 student.display();
 sc.close();
 }
 }
