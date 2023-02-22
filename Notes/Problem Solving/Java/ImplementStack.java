import java.util.*;

public class ImplementStack {
    public static void main(String args[]) {
        // Initialization:-
        Stack<String> st = new Stack<String>();
        st.addAll(Arrays.asList("Om", "Rohit", "Anand", "Sourav"));
        
        // peek function:-
        System.out.println(st.peek());
        System.out.println(st);
        System.out.println(st.firstElement());

        // Pop function:-
        System.out.println(st.pop());


        // Stack of a custom class :-
        Stack<Student> s = new Stack<Student>();
        
        // Push into stack of a custom class :-
        s.push(new Student(77, "Om"));
        s.push(new Student(70, "Anand"));
        s.push(new Student(420, "Rohit"));

        // Printing out the custom stack :-
        System.out.println(s);

        // Pop from a stack of custom class :-
        System.out.println(s.peek());
        System.out.println(s.pop());

        // Iterating over the custom stack :-
        for(Object ele : s)
            System.out.println(ele);
    }
}
