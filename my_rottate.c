#include <stdio.h>
#include "rottate_bits.h"
int main() {
    unsigned int val;
    int rot;
    printf("Enter a two numbers first just number second how much to rotate:\n ");
    fscanf(stdin, "%u", &val);
    fscanf(stdin, "%d", &rot);
    printf("Before rotation\n");
    print_in_all_bases(val); /*call to the function that actually print the bases of the number*/
    val = rotate(val, rot);/*call the function that rotate the integer val by rot bit positions */
    printf("After rotation\n");
    print_in_all_bases(val);
    return 0;
}
