// CodeForces 4A
// AC | 622 ms | 0 KB
import java.util.Scanner;

public class c_4a {
    public static void main(String[] args) {
        int n;
        Scanner s = new Scanner(System.in);
        while (s.hasNextInt()) {
            n = s.nextInt();
            if (n > 2 && n % 2 == 0) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}