#include <stdio.h>
#include <string.h>

#define MAX 256

int main() {
    int choice = 0, count = 0, c1 = 0, c2 = 0, i = 0, j = 0, size = 0, temp, s, arr[MAX];
    char s1[MAX], s2[MAX], cpy[MAX];

    printf("\n---------------------------------------------\n");
    printf("= = = =  ARRAY SORTING AND OPERATIONS = = = = \n\n");
    printf("NOTE: MAX STRING AND ARRAY SIZE IS %d.\n\n", MAX);

    printf("Enter the size of array:   ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Enter value for a[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Clearing input buffer
    while (getchar() != '\n');

    printf("\nEnter 1st string:   ");
    fgets(s1, MAX, stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter 2nd string:   ");
    fgets(s2, MAX, stdin);
    s2[strcspn(s2, "\n")] = 0;

    do {
        printf("\n1. Sorting and searching the array.\n");
        printf("2. Performing operations on strings.\n");
        printf("3. Exit the program.\n");
        printf("\nChoose: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3) {
            printf("PLEASE ENTER VALID CHOICE.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("\n1. Sort\n2. Search\n3. Back\nChoose: ");
                scanf("%d", &c1);

                if (c1 == 1) {
                    for (i = 0; i < size - 1; i++) {
                        for (j = 0; j < size - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    printf("\nSorted array:\n");
                    for (i = 0; i < size; i++) printf("%d ", arr[i]);
                    printf("\n");
                } 
                else if (c1 == 2) {
                    count = 0;
                    printf("Enter value to search: ");
                    scanf("%d", &s);
                    for (i = 0; i < size; i++) {
                        if (s == arr[i]) count++;
                    }
                    if (count != 0) printf("%d is found.\n", s);
                    else printf("%d not found.\n", s);
                }
                break;

            case 2:
                printf("\n1. Concatenate\n2. Copy\n3. Compare\nChoose: ");
                scanf("%d", &c2);

                if (c2 == 1) {
                    strcpy(cpy, s1);
                    strcat(cpy, s2);
                    printf("Result (S1 + S2): %s\n", cpy);
                } 
                else if (c2 == 2) {
                    int copyChoice;
                    printf("\nWhich string do you want to copy?\n1. String 1\n2. String 2\nChoose: ");
                    scanf("%d", &copyChoice);
                    
                    if (copyChoice == 1) {
                        strcpy(cpy, s1);
                        printf("String 1 copied to cpy. Value: %s\n", cpy);
                    } else if (copyChoice == 2) {
                        strcpy(cpy, s2);
                        printf("String 2 copied to cpy. Value: %s\n", cpy);
                    } else {
                        printf("Invalid choice for copy operation.\n");
                    }
                } 
                else if (c2 == 3) {
                    int res = strcmp(s1, s2);
                    if (res == 0) printf("Strings are identical.\n");
                    else printf("Strings are different.\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
