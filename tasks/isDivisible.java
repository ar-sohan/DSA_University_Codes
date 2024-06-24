import java.util.Scanner;

public class isDivisible {

    public static void checkDivisible(int x) {
        if (x % 7 == 0 && x % 5 == 0) {
            System.out.println("Divisible by both");
        }
        else if (x % 7 == 0) {
            System.out.println("Invalid : Divisible by 7 only");
        }
        else if (x % 5 == 0) {
            System.out.println("Invalid : Divisible by 5 only");
        }
        else {
            System.out.println("No");
        }
    }
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter any number : ");
        int num = Integer.parseInt(input.nextLine());

        checkDivisible(num);

        input.close();
    }
}
