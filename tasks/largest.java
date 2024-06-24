import java.util.Scanner;

public class largest {
    
    public static int largest (int num1, int num2, int num3) {
        int x;
        if (num1 > num2) {
            if (num1 > num3) {
                x = num1;
            } else {
                x = num3;
            }
        }
        else {
            if (num2 > num3) {
                x = num2;
            } else {
                x = num3;
            }
        }
        return x;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int num1 = Integer.parseInt(sc.nextLine());

        System.out.println("Enter second number: ");
        int num2 = Integer.parseInt(sc.nextLine());

        System.out.println("Enter third number: ");
        int num3 = Integer.parseInt(sc.nextLine());

        int largest = largest(num1, num2, num3);
        System.out.println("The largest number is: " + largest);

        sc.close();
    }
}
