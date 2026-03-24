import java.util.Scanner;

public class StudentRegistration {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt for student name
        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        // Prompt for number of registered units
        System.out.print("Enter number of registered units: ");
        int units = scanner.nextInt();

        // Determine registration status
        String status;
        if (units > 7) {
            status = "Overload - Approval Required";
        } else {
            status = "Registration Accepted";
        }

        // Print final summary
        System.out.printf("\nStudent Name: %s\nRegistered Units: %d\nStatus: %s\n", name, units, status);

        // Close scanner
        scanner.close();
    }
}