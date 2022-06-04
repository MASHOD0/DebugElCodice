import java.utils.Scanner;
/*
 * Program to find the GCD of two numbers.
 */
public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int algo = algo(a, b);
        System.out.println("GCD of " + a + " and " + b + " is " + algo);
    }

    public static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }
}