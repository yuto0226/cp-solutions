// CodeForces 71A
// AC | 280 ms | 200 KB
import java.util.Scanner;

public class c_71a {
    public static void main(String[] args) {
        String input;
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.nextLine();
        while (n-- != 0) {
            input = s.nextLine();
            input.replace("\n", "");
            input.strip();
            if (input.length() > 10) {
                System.out.println(
                        String.format("%s%d%s", input.charAt(0), input.length() - 2, input.charAt(input.length() - 1)));
            } else {
                System.out.println(input);
            }
        }
    }
}
