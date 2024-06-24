import java.util.Scanner;

public class Semester {
    
    public static void semesterDefine(int register) {
        int year = register / 1000000;
        int sem = (register / 100000) % 100;
        String name;
        switch (sem) {
            case 1:
                name = "Spring";
                break;
            case 2:
                name = "Fall";
                break;
            case 3:
                name = "Summer";
                break;
            default:
                name = "Invalid semester code";
        }

        System.out.println("Student joined BRAC in " + name + " " + year);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter register number : ");
        int register = Integer.parseInt(input.nextLine());

        semesterDefine(register);

        input.close();
    }
}
