import java.util.*;

public class ImplementSet {
    public static void main(String args[]) {
        // HashSet:-
        // Initialization:-
        Set<String> set = new HashSet<String>();
        set.addAll(Arrays.asList("Om", "Anand", "Rohit"));
        Set<String> set2 = new HashSet<String>();
        set2.addAll(Arrays.asList("Sourav", "Sinha", "Om"));
        System.out.println(set);
        System.out.println(set2);

        // Union operation:-
        Set<String> setunion = new HashSet<String>(set); 
        setunion.addAll(set2);
        System.out.println(setunion);

        // Intersection operator:-
        Set<String> setintersect = new HashSet<String>(set);
        setintersect.retainAll(set2);
        System.out.println(setintersect);

        // Iteration:-
        for (String s : setunion)
            System.out.println(s);
        


        // LinkedHashSet:-
        // Initialization:-
        Set<String> lset = new LinkedHashSet<String>();
        lset.addAll(Arrays.asList("Om", "Rohit", "Anand", "Sourav"));
        
        // Contains operation:-
        System.out.println(lset.contains("Sinha"));
        
        // Iteration over lset:-
        System.out.println(lset);
        for (String s : lset)
            System.out.println(s);
        


        // TreeSet is just a sorted set
    }
}
