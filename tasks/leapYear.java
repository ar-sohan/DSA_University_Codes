import java.util.Scanner;

public class leapYear {

    public static void checkLeapYear(int year){
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                System.out.println(year + " is a leap year!");
            }
            else {
                System.out.println(year + " is not a leap year!");
            }
        }
        else if (year % 4 == 0) {
            System.out.println(year + " is a leap year!");
        }
        else {
            System.out.println(year +" is not a leap year!");
        }
    }
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter a year : ");
        int year = Integer.parseInt(input.nextLine());

        checkLeapYear(year);

        input.close();
    }
}
