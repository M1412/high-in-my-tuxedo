/**
 * @file IntegerTypes.cpp
 * @author Mohamed Ishmael (magic.moha@outlook.com)
 * @version 0.1
 * @date 2020-10-28
 *
 * @copyright Copyright (c) 2020
 *
 */

/**
 * @brief
 * Type               | Signed |         Size in bytes       | printf format
 * specifier
 *
 * short              | Yes    | 2     | 2    | 2     | 2    | %hd
 * unsigned short     | No     | 2     | 2    | 2     | 2    | %hu
 * int                | Yes    | 4     | 4    | 4     | 4    | %d
 * unsigned int       | No     | 4     | 4    | 4     | 4    | %u
 * long               | Yes    | 4     | 4    | 4     | 8    | %ld
 * unsigned long      | No     | 4     | 4    | 4     | 8    | %lu
 * long long          | Yes    | 8     | 8    | 8     | 8    | %lld
 * unsigned long long | No     | 8     | 8    | 8     | 8    | %llu
 *                             | win32 / unix | win64 / unix |
 *
 * A literal is a hardcoded value in a program. You can use one of four
 * hardcoded, integer literal representations:
 *
 * Binary uses the prefix 0b
 * Octal uses the prefix 0
 * Decimal this is the default (No need for prefix)
 * Hexadecimal uses the prefix 0x
 */

#include <cstdio>
int main() {
  int short a = 0b10101010;
  printf("%hu\n", a);
  int b = 0123;
  printf("%d\n", b);
  unsigned long long d = 0xFFFFFFFFFFFFFFFF;
  printf("%llu\n", d);
}
