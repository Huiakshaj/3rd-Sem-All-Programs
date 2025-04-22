import java.util.*;
interface Employee {
    double getSalary();
}
class Manager implements Employee {
    public double getSalary() {
        return 50000;
    }
}
class Developer implements Employee {
    public double getSalary() {
        return 40000;
    }
}
class EmployeeDemo {
    public static void main(String args[]) { 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter role (Manager/Developer): ");
        String role = sc.next();
        Employee e;
        if (role.equalsIgnoreCase("Manager")) {
            e = new Manager();
        } else {
            e = new Developer();
        }
        System.out.println("Salary: " + e.getSalary());
    }
}
