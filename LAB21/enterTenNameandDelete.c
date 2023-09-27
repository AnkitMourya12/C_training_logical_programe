#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50]; // array for ten names 
    int i, j;
    char nameToDelete[50];  ///array for delete

   
    printf("Enter 10 names:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    
    printf("\nCurrent list of names:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    
    printf("\nEnter the name you want to delete: ");
    scanf("%s", nameToDelete);

   
    int found = 0;
    for (i = 0; i < 10; i++) {
        if (strcmp(names[i], nameToDelete) == 0) {
            found = 1;
            // Shift elements to the left to overwrite the deleted name
            for (j = i; j < 9; j++) {
                strcpy(names[j], names[j + 1]);
            }
            // Clear the last element in the array
            strcpy(names[9], "");
            break; // Exit the loop if the name is found and deleted
        }
    }

   
    if (found) {
        printf("\nUpdated list of names:\n");
        for (i = 0; i < 9; i++) {
            printf("%d. %s\n", i + 1, names[i]);
        }
    } else {
        printf("\nName not found in the list.\n");
    }

    return 0;
}
