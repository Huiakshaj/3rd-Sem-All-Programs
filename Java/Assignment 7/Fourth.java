class Employee
{
	String name;
	double salary;
	public Employee(String name, double salary)
	{
		this.name=name;
		this.salary= salary;
	}
	public void work()
	{
		System.out.println("EMPLOYEE IS WORKING FOR THE COMPANY");
	}
}

class Manager extends Employee 
{
	public Manager(String name, double salary)
	{
		super(name,salary);
	}
	public void work()
	{
		super.work();
		System.out.println("MANAGER IS MANAGING THE WHOLE COMPANY");
	}
}
class Director extends Manager
{
	public Director(String name, double salary)
	{
		super(name, salary);
	}
	public void work()
	{
		super.work();
		System.out.println("DIRECTOR DIRECTS THE COMPANY");
	}
}
public class Fourth
{
	public static void main(String args[])
	{
		Director director=new Director("Insert your name",500000000);
		director.work();
	}
}											
