import java.util.*;

public class ImplementQueue {
    public static void main(String[] args) {
        // Initialization :-
        PriorityQueue<String> p = new PriorityQueue<String>();
        
        // Offer method :-
        p.offer("A");
        p.offer("B");
        p.offer("C");
        p.offer("D");
        
        // Prinitng out the queue (priorityQueue in our case)
        System.out.println(p);

        // Peek() function :-
        System.out.println(p.peek());
        
        // Poll() function :-
        System.out.println(p.poll());
        System.out.println(p);

        // Iteration :-
        for (Object ele : p)
            System.out.println(ele);

        // Implement queue of a custom class :_
        PriorityQueue<Student> s = new PriorityQueue<Student>();
        s.add(new Student(77, "Om"));
        s.add(new Student(70, "Anand"));
        s.add(new Student(420, "Rohit"));
        s.add(new Student(86, "Sinha"));
        
        // Print out the custom class queue :-
        System.out.println(s);

        // Iterate over the custom class queue :-
        for (Object ele : s)
            System.out.println(ele);
        
    }   
}
