#include <stdio.h>

int main() {

    /*
    1) Basic Types
        a) integer types
        b) floating-point types
    2) Enumerated types
    3) The type void
    4) Derived types
        a) Pointer types
        b) Array types
        c) Structure types
        d) Union types
        e) Function types
    */


    /* The C programming language provides the four basic arithmetic type specifiers:
       char, int, float and double, and the modifiers signed, unsigned, short, and long.
    */

    /* Integer Types */

    /// char, signed char, unsigned char

    // ***char*** -- 1 byte (8 bits) -- -128 to 127 or 0 to 255; %c
    char char_variable = 'C'; // single character %c
    printf("char: %c\n", char_variable);
    // !!! signed - indicates that a variable can hold negative and positive values
    // signed char -- 1 byte (8 bits) -- [−127, +127] -- %c (or %hhi for numerical output)
    signed char signed_char_variable = 1;
    printf("signed char: %c\n", signed_char_variable);
    // !!! unsigned - indicates that a variable can hold only positive numbers
    // unsigned char -- 1 byte (8 bits) -- [0, 255] -- %c (or %hhu for numerical output)
    int character = 97;
    unsigned char unsigned_char_variable = character;
    printf("unsigned char: %c\n", unsigned_char_variable);

    /*
    /// short, short int, signed short, signed short int (short signed integer type)
    // short -- 2 bytes (16 bits) -- [−32,767, +32,767] -- %hi or %hd
    short short_variable = 32767;
    printf("short: %d\n", short_variable);
    /// unsigned short, unsigned short int (short unsigned integer type)
    // unsigned short -- 2 bytes (16 bits) -- [0, 65,535] -- %hu
    unsigned short unsigned_short_variable = 65535;
    printf("unsigned short: %d\n", unsigned_short_variable);
    */

    printf("\n");
    printf("**********\n");
    printf("\n");

    /// int, unsigned int, long long int, unsigned long long int
    // ***int*** -- 4 bytes (32 bits) -- [-2,147,483,648 to +2,147,483,647] -- %d
    int int_variable = 2147483647;
    printf("int: %d\n", int_variable);
    // unsigned int -- 4 bytes (32 bits) -- [0 to +4,294,967,295) -- %u
    unsigned int unsigned_int_variable = 4294967295;
    printf("unsigned int: %u\n", unsigned_int_variable);
    // long long int -- 8 bytes (64 bits) -- [-9 quintillion to +9 quintillion] -- %lld
    long long int long_long_int_variable = 9223372036854775807;
    printf("long long int: %lld\n", long_long_int_variable);
    // unsigned long long int -- 8 bytes (64 bits) -- [0 to +18 quintillion] -- %llu
    unsigned long long int unsigned_long_long_int_variable = 18446744073709551615U;
    printf("unsigned long long int: %llu\n", unsigned_long_long_int_variable);

    printf("\n");
    printf("**********\n");
    printf("\n");

    /// float
    // ***float*** -- 4 bytes (32 bits) -- [...] -- %f, %F (6 - 7 digits)
    float float_variable = 3.141592;
    printf("float: %0.6f\n", float_variable);

    printf("\n");
    printf("**********\n");
    printf("\n");

    /// double
    // ***double*** -- 8 bytes (64 bits) -- [...] -- %lf, %lF (15 - 16 digits)
    double double_variable = 3.141592653589793;
    printf("double: %lf\n", double_variable);

    printf("\nTHAT\'S IT!\n\n");

	return 0;
}
