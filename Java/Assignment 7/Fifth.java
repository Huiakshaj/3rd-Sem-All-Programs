class Person {
    private String name;
    private int age;
    private String address;


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

   
    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }
}

public class Fifth {
    public static void main(String[] args) {
        Person person = new Person();
        
     
        person.setName("Akshaj Hui");
        person.setAge(19);
        person.setAddress("Kolkata");

        
        System.out.println("NAME: " + person.getName());
        System.out.println("AGE: " + person.getAge());
        System.out.println("ADDRESS: " + person.getAddress());
    }
}

