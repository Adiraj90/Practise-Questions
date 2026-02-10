import java.util.*;

public class fibonacci {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        
        int a = 0;
        int b = 1;
        System.out.print(a + " ");
        System.out.print(b + " ");
        while(n > 2) {
            int c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;
            n--;
        }
    }
} 