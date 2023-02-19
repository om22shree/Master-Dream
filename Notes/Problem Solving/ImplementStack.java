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
    }
}
