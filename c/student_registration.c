#include <stdio.h>

int main() {
    char name[100];
    int units;
    
    // Prompt for student name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    // Prompt for number of registered units
    printf("Enter number of registered units: ");
    scanf("%d", &units);
    
    // Check registration status
    if (units > 7) {
        printf("Overload - Approval Required\n");
    } else {
        printf("Registration Accepted\n");
    }
    
    // Print final summary
    printf("\nFinal Summary:\n");
    printf("Student Name: %s", name);
    printf("Registered Units: %d\n", units);
    printf("Status: %s\n", (units > 7) ? "Overload - Approval Required" : "Registration Accepted");
    
    return 0;
}