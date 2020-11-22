#include <cstddef>
#include <cstdio>

int main() {
  size_t size_char = sizeof(char);
  printf("char: %zd\n", size_char);
  size_t size_short = sizeof(short);
  printf("short: %zd\n", size_short);
  size_t size_int = sizeof(int);
  printf("int: %zd\n", size_int);
  size_t size_long = sizeof(long);
  printf("long: %zd\n", size_long);
  size_t size_long_long = sizeof(long long);
  printf("long long: %zd\n", size_long_long);

  return 0;
}