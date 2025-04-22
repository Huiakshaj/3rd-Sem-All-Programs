class Animal{
 void sound(){
  System.out.println("Animals make sound - ");
  }
}
class Cat extends Animal{
 void sound(){
   System.out.println("Cat : Meow!");
   }
 }
 class Dog extends Animal{
  void sound(){
    System.out.println("Dog : Barks!");
     }
}
public class Animals{
  public static void main(String[] args){
  Animal mypet1 = new Animal();
  Animal mypet2 = new Cat();
  Animal mypet3 = new Dog();
  mypet1.sound();
  mypet2.sound();
  mypet3.sound();
  }
}
