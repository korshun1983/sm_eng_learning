#include <stdio.h>

int main(int argc, char **argv)
{
    int select = 0;
    printf("Select variant:\n");
    printf("1 - convert from decimal to hexadecimal\n");
    printf("2 - convert from hexadecimal to decimal\n");
    printf("Your choice: ");
    scanf("%d", &select);  

    if (select == 1) {
        int dec;
        printf("Enter a decimal number: ");
        scanf("%d", &dec);
        printf("Hexadecimal: 0x%X\n", dec);  
    }
    else if (select == 2) {
        unsigned int hex;
        printf("Enter a hexadecimal number (e.g., 1A or 0x1A): ");
        scanf("%x", &hex);  
        printf("Decimal: %u\n", hex);
    }
    else {
        printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}
