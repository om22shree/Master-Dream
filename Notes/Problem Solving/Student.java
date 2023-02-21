public class Student {
    Integer roll;
    String name;

    public Student(Integer roll, String name) {
        this.roll = roll;
        this.name = name;
    }

    @Override
    public String toString() {
        return "{" + this.name + ", " + this.roll + "}";
    }
}
