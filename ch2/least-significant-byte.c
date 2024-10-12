#include <stdio.h>


int bis(int x, int m) {
    return x & m;
}

int bic(int x, int m) {
    return x | m;
}

int main() {
    int val = 0x00000021;
    int least_significant_byte = val & 0xFF;
    printf("%d\n", least_significant_byte);

    int all_but_least_significant_byte = val & ~0xFF;
    printf("%d\n", all_but_least_significant_byte);

    int least_significant_byte_is_only_ones_other_bytes_unchanged = (val & ~0xFF) | 0xFF;
    printf("%d\n", least_significant_byte_is_only_ones_other_bytes_unchanged);

}
