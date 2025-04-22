import java.util.Scanner;
class Vehicle{
  public void move(){
     System.out.println("The vehicle is moving.");
    }
  }
class Car extends Vehicle{
   public void main(){
      System.out.println("The car us moving on the road.");
      }
    }
 class ElectricCar extends Car{
   public void move(){
      System.out.println("The electric car is moving silently.");
      }
  }
public class Roads{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the type of vehicle (Vehicle/Car/Electric Car):");
    String vehicleType = sc.nextLine();
    Vehicle vehicle;
    if(vehicleType.equalsIgnoreCase("Electric Car")){
     vehicle = new ElectricCar();
    }else if (vehicleType.equalsIgnoreCase("Car")){
     vehicle = new Car();
    }else{
      vehicle = new Vehicle();
    }
    vehicle.move();
    sc.close();
    }
 }
