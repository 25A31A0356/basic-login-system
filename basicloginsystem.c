#include <stdio.h>
#include <string.h>

char savedUsername[50];
char savedPassword[50];

void registerUser() {
    printf("\n--- Register ---\n");

    printf("Enter username: ");
    scanf("%s", savedUsername);

    printf("Enter password: ");
    scanf("%s", savedPassword);

    printf("Registration successful!\n");
}

void loginUser() {
    char username[50], password[50];

    printf("\n--- Login ---\n");

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, savedUsername) == 0 &&
        strcmp(password, savedPassword) == 0) {
        printf("Login successful! Welcome %s\n", username);
    } else {
        printf("Invalid username or password!\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}