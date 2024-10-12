#include <stdio.h>

int main()
{
    int hex;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &hex);
    printf("Binary number is: ");

    int leading_zero = 1;
    for (int i = 28; i >= 0; i -= 4) {
        int nibble = (hex >> i) & 0xF;

        for (int j = 3; j >= 0; j--) {
            int bit = (nibble >> j) & 1;
            if (bit)
                leading_zero = 0;
            if (!leading_zero)
                printf("%d", bit);
        }
    }

    if (leading_zero)
        printf("0");
}
