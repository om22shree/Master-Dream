import java.util.LinkedList;
import java.util.Queue;

public class ImplementQueue {
    public static void main(String args[]) {
        // Inintialization:-
        Queue<Integer> q = new LinkedList<Integer>();
        
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

    }
}
