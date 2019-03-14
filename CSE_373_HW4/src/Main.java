import java.io.IOException;
import java.util.*;

public class Main {

    interface Filter<T> {
        boolean matches(T t);
    }
    public static void main(String... args) throws IOException {
        int size = 18;
        Integer[][] subSets = {
                {1,2,3,4,5,6},
                {5,6,8,9},
                {1,4,7,10},
                {2,5,7,8,11},
                {3,6,9,12},
                {10,11},
                {6,7,8,16,18},
                {13,14},
                {0,1,2,3,4,5},
                {15,16,18},
                {1,2,7,12},
                {17,18}
        };
        Integer[] sol = new Integer[size];
        for(int i = 0; i < size; i++)
            sol[i] = i + 1;

        List<Set<Integer>> Sets = new ArrayList<>();
        for (Integer[] arr : subSets)
            Sets.add(new LinkedHashSet<>(Arrays.asList(arr)));
        final Set<Integer> solSet = new LinkedHashSet<>(Arrays.asList(sol));

        Set<Set<Integer>> Solution = shortestCombination(Sets, solSet);
        for(Set<Integer> ret : Solution)
            System.out.println(ret);
    }

    private static <T> Set<T> shortestCombination(List<T> Sets, Set<Integer> solSet) {
        Filter<Set<Set<Integer>>> filter = integers -> {
            Set<Integer> combined = new LinkedHashSet<>();
            for (Set<Integer> ints : integers)
                combined.addAll(ints);
            return combined.equals(solSet);
        };

        final int size = Sets.size();
        int permutations = 1 << size;
        List<Set<T>> options = new ArrayList<>();
        for(int i = 0; i < permutations; i++) {
            Set<T> combination = new LinkedHashSet<>();
            for(int j = 0; j < size; j++) {
                if (((i >> j) & 1) != 0)
                    combination.add(Sets.get(j));
            }
            if(filter.matches((Set<Set<Integer>>) combination)) {
                options.add(combination);
                break;

            }
        }

        Collections.sort(options, Comparator.comparingInt(Set::size));
        if (filter.matches((Set<Set<Integer>>) options.get(0)))
            return options.get(0);
        return null;
    }
}


