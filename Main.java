import java.io.*;

/**
 * Created by wwalt on 10/24/2017.
 Computes cycle length 
 */
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = br.readLine()) != null && !line.equals("\n") && !line.isEmpty()) {
            String[] arr = line.split(" ");
            int start = Integer.valueOf(arr[0]), end = 0;
            for(int i = 1; i < arr.length; i++)
                if(!arr[i].equals(""))
                    end = Integer.valueOf(arr[i]);
            int max = 0;
            int low = start, high = end;
            if (start > end) {
                low = end;
                high = start;
            }
            if(high > 1000000 || low < 0 ){
                System.out.println(start + " " + end + " Invalid input");
                break;
            }
            int c = 0;
            for (int j = low; j < high + 1; j++) {
                int temp = cycleLength(j);
                if (max < temp)
                    max = temp;
                if(c > 10000){
                    System.out.println(start + " " + end + " Invalid input");
                    return;
                }
                c++;
            }
            System.out.println(start + " " + end + " " + max);
        }
    }

    static int cycleLength(int n){
        int count = 1;
        while(n != 1){
            if(n % 2 == 1) {
                n = (3 * n + 1) / 2;
                count += 2;
            }
            else {
                n /= 2;
                count++;
            }
        }
        return count;
    }
}
