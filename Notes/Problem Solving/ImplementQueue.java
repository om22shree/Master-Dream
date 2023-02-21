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
        
    }   
}
