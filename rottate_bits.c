#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "rottate_bits.h"

/*function 1*/
/*this function checking howmanyBits */
int count_bits_of_un_int() { /*return the size of the binary number is */
    unsigned int val = 1;
    int count = 0;
    while (val) {
        val = val << 1;
        count++;
    }
    return count;
}
/*function 2 */
/* make a right/left shift to a by b */
unsigned int rotate_right(unsigned int a, int b) {
    unsigned int mask = 1;
    unsigned int bits;
    int t = b;
    int mov;
    while (t > 1) {
        mask = mask << 1;
        mask++;
        t--;
    }
    bits = a & mask;
    a = a >> b;
    mov = count_bits_of_un_int() - b;
    bits = bits << mov;
    a = a | bits;
    return a;
}
/*function 3 */
unsigned int rotate(unsigned int a, int b) {
    b %= count_bits_of_un_int();
    if (b > 0)
        return rotate_right(a, b);
    return  rotate_right(a, count_bits_of_un_int() + b);/*its the same like rotate left becaous if its 3 bits 110 and rotate left 1 its be 101*/
    /*and rotate right by 2 its the same 101*/
}
/*function 4 */
/*this function for print the bases of numbre */
void print_base(unsigned int a, int base) {
    int digit,count=0,count2;
    unsigned int t;
    if (a == 0) {
        printf("%d", 0);
        return;
    }
    t = a;
    while (t) {
        t /= base;
        count++;
    }
    while (count) {
        t = a;
        count2 = --count;
        while (count2--)
            t /= base;
        digit = t % base;
        if (digit > 9)
            printf("%c", digit + 'A' - 10);
        else
            printf("%d", digit);
    }
    printf("\n");
}
/*function 5 */
/* print all the bases of the number */
void print_in_all_bases(unsigned int a) {
    printf("%u in base 2: ", a);
    print_base(a, 2);
    printf("%u in base 8: ", a);
    print_base(a, 8);
    printf("%u in base 10: %u\n", a,a);
    printf("%u in base 16: ", a);
    print_base(a, 16);
}

