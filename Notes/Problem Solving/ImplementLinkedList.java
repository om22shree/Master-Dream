import java.util.*;

public class ImplementLinkedList {
    public static void main(String args[]) {
        // Inintialization:-
        LinkedList<Integer> ll = new LinkedList<Integer>();

         // Add function:-
        ll.add(12);
        ll.add(42);
        ll.add(56);
        ll.add(72);
        ll.addFirst(100);
        ll.addLast(200);
        System.out.println(ll);
        
        // Accessing the first and last element with function:-
        System.out.println(ll.getFirst());
        System.out.println(ll.getLast());
        
        // Using the peek function:-
        System.out.println(ll.peek());

        // Size funciton:-
        System.out.println(ll.size());

        // Removing elements:-
        ll.remove(1);
        ll.removeLast();
        ll.removeFirst();
        System.out.println(ll);

        // Iterating over the linkedlist:-
        for (Integer ele : ll)
            System.out.println(ele);
        for (int i = 0; i < ll.size(); i++)
            System.out.println(ll.get(i));
    }
}
