// CodeForces 231A
// AC | 560 ms | 200KB
import java.util.Scanner;

public class c_231a {
    public static void main(String[] args) {
        int count = 0;
        Scanner s = new Scanner(System.in);
        while (s.hasNextInt()) {
            int n = s.nextInt();
            s.nextLine();
            while (n-- != 0) {
                int ability = 0;
                int tmp = s.nextInt();
                ability += tmp;
                tmp = s.nextInt();
                ability += tmp;
                tmp = s.nextInt();
                ability += tmp;

                if (ability >= 2)
                    count++;
            }
            System.out.println(count);
        }
    }
}