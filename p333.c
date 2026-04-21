#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

int main() {
    int choice, size = 0, val, pos, i;
    int arr[MAX_SIZE];

    do {
        printf("\n-------------------------------------------------------\n");
        printf("= = = =    A R R A Y   O P E R A T I O N    = = = =\n");
        printf("-------------------------------------------------------\n");
        printf("1. Creating an array (Set size)\n");
        printf("2. Entering values in the array\n");
        printf("3. Printing the array\n");
        printf("4. Inserting a value in the array\n");
        printf("5. Updating a value in the array\n");
        printf("6. Deleting a value from the array\n");
        printf("7. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        printf("-------------------------------------------------------\n");
        
        switch(choice) {
            case 1:
                printf("\nEnter the size of the array (Max %d): ", MAX_SIZE);
                scanf("%d", &size);
                if (size < 1 || size > MAX_SIZE) {
                    printf("Invalid size! Please enter a size between 1 and %d.\n", MAX_SIZE);
                    size = 0; // Reset size if invalid
                } else {
                    printf("An array of size %d has been created.\n", size);
                }
                break;
            
            case 2:
                if (size == 0) {
                    printf("\nPlease create the array (Option 1) first!\n");
                } else {
                    printf("\nEnter %d values into the array:\n", size);
                    for (i = 0; i < size; i++) {
                        printf("Enter value for a[%d]: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                    printf("Values successfully entered.\n");
                }
                break;
                
            case 3:
                if (size == 0) {
                    printf("\nThe array is currently empty.\n");
                } else {
                    printf("\nArray elements are:\n");
                    for (i = 0; i < size; i++) {
                        printf("a[%d]  =  %d \n", i + 1, arr[i]);
                    }
                    printf("\n");
                }
                break;
                
            case 4:
                if (size == MAX_SIZE) {
                    printf("\nArray is full! Cannot insert more elements.\n");
                } else {
                    printf("\nEnter the position (1 to %d) to insert new value: ", size + 1);
                    scanf("%d", &pos);
                    
                    if (pos < 1 || pos > size + 1) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Enter the value to insert: ");
                        scanf("%d", &val);
                        
                        // Shift elements to the right to make space
                        for (i = size; i >= pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        
                        arr[pos - 1] = val; // Insert the new value (pos-1 because arrays start at index 0)
                        size++;             // Increase the tracked size of the array
                        printf("Value inserted successfully!\n");
                    }
                }
                break;
                
            case 5:
                if (size == 0) {
                    printf("\nThe array is empty! Nothing to update.\n");
                } else {
                    printf("\nEnter the position (1 to %d) to update: ", size);
                    scanf("%d", &pos);
                    
                    if (pos < 1 || pos > size) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Enter the new value: ");
                        scanf("%d", &val);
                        arr[pos - 1] = val; // Overwrite the old value
                        printf("Value updated successfully!\n");
                    }
                }
                break;
                
            case 6:
                if (size == 0) {
                    printf("\nThe array is empty! Nothing to delete.\n");
                } else {
                    printf("\nEnter the position (1 to %d) to delete: ", size);
                    scanf("%d", &pos);
                    
                    if (pos < 1 || pos > size) {
                        printf("Invalid position!\n");
                    } else {
                        // Shift elements to the left to fill the gap
                        for (i = pos - 1; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--; // Decrease the tracked size of the array
                        printf("Value deleted successfully!\n");
                    }
                }
                break;
                
            case 7:
                printf("\nExiting the program. Goodbye!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please select an option between 1 and 7.\n");
        }
    } while(choice != 7);
    
    return 0;
}
