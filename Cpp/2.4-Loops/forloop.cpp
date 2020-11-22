#include <cstddef>
#include <cstdio>

int main() {
  // This flag is to store the maximum and minimum values
  unsigned long int flag = 0;
  unsigned long values[] = {10, 0, 50, 20, 40, 5};
  // Assign the maximum value to flag
  for (size_t index = 0; index < 5; index++) {
    if (values[index] > flag) flag = values[index];
  }
  // Print it
  printf("The maximum value is %lu\n", flag);
  // Then assign the minimum value to flag
  for (size_t index = 0; index < 5; index++) {
    if (values[index] < flag) flag = values[index];
  }
  // Print it
  printf("The minimum value is %lu\n", flag);
  return 0;
}