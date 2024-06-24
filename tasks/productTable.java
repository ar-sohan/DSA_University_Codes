public class productTable{

    public static void viewTable(int n, int i) {
        if (i <= 10) {
            System.out.println(n + " x " + i + " = " + (n * i));
            viewTable(n, i + 1);
        }
    }

    public static void main(String[] args) {
        int number = 5;
        viewTable(number, 1);
    }
}
