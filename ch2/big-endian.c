#include <stdio.h>
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void* x)
{
    show_bytes((byte_pointer)&x, sizeof(void*));
}

int main()
{

    int val = 0x87564321;
    byte_pointer valp = (byte_pointer)&val;
    show_bytes(valp, 1); // 21 // little-endian
    show_bytes(valp, 2); // 21 43 // little-endian
    show_bytes(valp, 3); // 21 43 65 // little-endian
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, 6); // 61 62 63 64 65 66 // little-endian
}

