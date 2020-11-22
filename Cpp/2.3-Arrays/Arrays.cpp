#include <cstddef>
#include <cstdio>

int main() {
  int array[] = {1, 2, 3, 4, 5};
  printf("The third elements is %d.\n", array[2]);
  size_t size_array = sizeof(array);
  printf("Size of array %zd\n", size_array);
  array[2] = 100;
  printf("The third element is %d.\n", array[2]);
  return 0;
}
