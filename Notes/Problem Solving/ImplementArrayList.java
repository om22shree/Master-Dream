import java.util.*;

// Lists :-
class ImplementArrayList {
    public static void main(String[] args) {
        // Initialization:-
        List<Integer> list = new ArrayList<Integer>();
        
        // Adding elements:-
        list.add(20);
        list.add(42);
        list.add(76);
        list.add(18);
        list.add(64);
        list.add(1, 50);
        System.out.println("Element at index 1: " + list.get(1));
        
        // Iterating over the list using the iterators:-
        Iterator<Integer> it = list.iterator();
        System.out.println("Elements of list:-");
        while (it.hasNext())
            System.out.println(it.next());
        
        // Using the addAll function:-
        List<Integer> nlist = new ArrayList<Integer>();
        nlist.add(150);
        nlist.add(250);
        nlist.add(650);
        nlist.add(480);
        list.addAll(nlist);

        // Iterating over the list using the for-each function:-
        System.out.println("Elements after adding nlist :-");
        for (Integer ele : list)
            System.out.println(ele);

        // Set function:-
        list.set(2, 77);
        System.out.println(list);

        // Removal of elements:-
        list.remove(2);
        System.out.println(list);

    }
}