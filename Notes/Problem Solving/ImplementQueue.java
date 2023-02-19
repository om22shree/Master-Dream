import java.util.*;

public class ImplementQueue {
    public static void main(String args[]) {
        // Inintialization:-
        Queue<Integer> q = new LinkedList<Integer>();
        LinkedList<Integer> q1 = new LinkedList<Integer>();

        // Offer function:-
        q.offer(12);
        q.offer(42);
        q.offer(56);
        q.offer(72);
        System.out.println(q);
        
        // Using the poll function:-
        System.out.println(q.poll());
        System.out.println(q.poll());
        
        // Using the peek function:-
        System.out.println(q.peek());

         // Offer function:-
        q1.offer(12);
        q1.offer(42);
        q1.offer(56);
        q1.offer(72);
        System.out.println(q1);
        
        // Using the poll function:-
        System.out.println(q1.poll());
        System.out.println(q1.poll());
        
        // Using the peek function:-
        System.out.println(q1.peek());

    }
}
