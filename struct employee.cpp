#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_UNION_MEMBERS 100

union Data {
    int intValue;
    float floatValue;
    char strValue[20];
};

typedef struct {
    char type; // 'i' for int, 'f' for float, 's' for string
    union Data value;
} UnionMember;

int main() {
    UnionMember members[MAX_UNION_MEMBERS];
    int choice, count = 0;

    while (1) {
        printf("Enter the type of data (1: int, 2: float, 3: string, 4: exit): ");
        scanf("%d", &choice);
        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1:
                members[count].type = 'i';
                printf("Enter an integer: ");
                scanf("%d", &members[count].value.intValue);
                break;
            case 2:
                members[count].type = 'f';
                printf("Enter a float: ");
                scanf("%f", &members[count].value.floatValue);
                break;
            case 3:
                members[count].type = 's';
                printf("Enter a string: ");
                scanf("%s", members[count].value.strValue);
                break;
            default:
                printf("Invalid choice\n");
                continue;
        }
        count++;
    }

    // Display the entered members
    printf("\nEntered members:\n");
    for (int i = 0; i < count; i++) {
        switch (members[i].type) {
            case 'i':
                printf("Member %d: int = %d\n", i + 1, members[i].value.intValue);
                break;
            case 'f':
                printf("Member %d: float = %.2f\n", i + 1, members[i].value.floatValue);
                break;
            case 's':
                printf("Member %d: string = %s\n", i + 1, members[i].value.strValue);
                break;
        }
    }

    return 0;
}

