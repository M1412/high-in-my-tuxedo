/**
 * @file printf.cpp
 * @author Mohamed Ishael (magic.moha@outlook.com)
 * @brief With printf you can easily introduce mismatches between format specifiers and
 * arguments, and this can cause strange behavior, program crashes, and even security vulnerabilities.
 * @version 0.1
 * @date 2020-10-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <cstdio>

int step_function(int x)
{
    int result = 0;
    if (x < 0)
    {
        result = -1;
    }
    else if (x > 0)
    {
        result = 1;
    }
    return result;
}

int main()
{
    int num1 = 42;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -32767;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);
    return 0;
}