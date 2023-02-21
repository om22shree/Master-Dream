import java.util.Objects;

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

    @Override
    public boolean equals(Object o) {
        Student s = (Student) o;
        return s.roll == this.roll && this.getClass() == o.getClass();
    }

    @Override
    public int hashCode() {
        return Objects.hash(roll);
    }
}
