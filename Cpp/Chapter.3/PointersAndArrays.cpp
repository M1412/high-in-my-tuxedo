#include <cstdio>

int main(int argc, char const* argv[]) {
  size_t key_to_the_universe[] = {0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF};
  size_t* key_ptr = key_to_the_universe;
  printf("%p\n\0", *key_ptr);
  printf("%zu\n\0", key_to_the_universe[0]);

  char tu[] = {'\a', 'b', 'c', 'd'};
  char* tu_ptr = tu;
  printf("%p\n\0", *tu_ptr);

  int integer{5};
  int* integer_pointer = &integer;
  printf("%p\n\0", integer_pointer);

  return 0;
}
