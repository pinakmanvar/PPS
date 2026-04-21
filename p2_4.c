#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    int choice;
    char str[256];

    while (1) {
        printf("\n--- String Manipulation Menu ---\n");
        printf("1. Reverse a string\n");
        printf("2. Convert to lower case\n");
        printf("3. Convert to upper case\n");
        printf("4. Find length of string\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        getchar();

        if (choice == 5) {
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter a string: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = 0;
        }

        switch (choice) {
            case 1:
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
            case 2:
                toLowerCase(str);
                printf("Lower case string: %s\n", str);
                break;
            case 3:
                toUpperCase(str);
                printf("Upper case string: %s\n", str);
                break;
            case 4:
                printf("Length of string: %zu\n", strlen(str));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
