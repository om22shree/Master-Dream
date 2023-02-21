import java.util.*;

public class ImplementQueue {
    public static void main(String[] args) {
        PriorityQueue<String> p = new PriorityQueue<String>();
        p.offer("A");
        p.offer("B");
        p.offer("C");
        p.offer("D");
        System.out.println(p);
        System.out.println(p.peek());
        System.out.println(p.poll());
        System.out.println(p);
    }   
}
