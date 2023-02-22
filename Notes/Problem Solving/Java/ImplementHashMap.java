import java.util.*;

class ImplementHashMap {
    public static void main(String[] args) {
        // Initialization :-
        HashMap<Student, String> s = new HashMap<>();
        
        // Put method :-
        s.putIfAbsent(new Student(77, "Om"), "Pass with O grade");
        s.putIfAbsent(new Student(70, "Anand"), "Pass with E grade");
        s.putIfAbsent(new Student(86, "Sinha"), "Pass with A grade");

        // Printing the hashmap :-
        System.out.println(s);

        // Iterating over the hashmap :-
        for (Map.Entry<Student, String> e : s.entrySet())
            System.out.println(e);
        
    }
}