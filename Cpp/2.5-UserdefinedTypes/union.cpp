/**
 * @file union.cpp
 * @author Mohamed Ismael (magic.moha@outlook.com)
 * @brief All memebers of a union are in the same place, you can cause data corruption
 * very easily.
 * @version 0.1
 * @date 2020-11-12
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <cstdio>

union Variant {
    char string[10];
    int integer;
    double floating_point;
};

int main() {
    Variant v;
    v.integer = 42;
    int x;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e:%f\n", v.floating_point);
    // the value here would be v.floating_point reinterpet_cast -ed to int
    // in other words will print the bits of the double value
    printf("A dumpster fire: %d\n", v.integer);
}