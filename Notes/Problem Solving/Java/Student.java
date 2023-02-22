import java.util.*;

public class Student implements Comparable<Student>{
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
    public int compareTo(Student o1) {
        return this.roll - o1.roll;
    }

    @Override
    public int hashCode() {
        return Objects.hash(roll);
    }
}
