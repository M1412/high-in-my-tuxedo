#include <cstddef>
#include <cstdio>

int main() {
  // This flag is to store the maximum and minimum values
  unsigned long int flag = 0;
  unsigned long values[] = {10, 0, 50, 20, 40, 150};
  for (unsigned long value : values) {
    flag = value > flag ? value : flag;
  }
  printf("This is the maximum number using range-based-for-loop: %ul\n", flag);
  return 0;
}