import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = 0;
        
        System.out.print("Enter a number: ");
        int number = input.nextInt();
        
        for(int i = 1; i <= number; i++) {
            count = count + 1;
        }
        
        if (number % 5 == 0) {
            System.out.println("Divisible by 5");
        }
        
        if (number % 7 == 0) {
            System.out.println("Divisible by 7");
        }
        
        System.out.println("Count is " + count);
        
        input.close();
    }
}
