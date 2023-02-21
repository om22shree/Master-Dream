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


        // Array of a custom class :-
        List<Student> s = new ArrayList<Student>();
        
        // Addition of custom elements into a class
        s.add(new Student(77, "Om"));
        s.add(new Student(70, "Anand"));
        
        // Printing the array of a custom class :-
        System.out.println(s);
        
        // Iteration over a custom array :-
        for (Object ele : s)
            System.out.println(ele);
        
        // Removal of an element from custom array :-
        s.remove(1);
        System.out.println(s);

    }
}