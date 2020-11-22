#include <cstdio>
#include <iostream>

int main(int argc, char const* argv[]) {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = &upper[0];
  char* lower_ptr = lower;

  lower[3] = 'd';
  upper_ptr[3] = 'D';
  *(lower + 1) = 'D';
  // 0 1 2 3 4 5  6 7 8 9 10 11
  // A B C D E \0 a b c d e  \0
  char letter_D = *(lower + 1);
  char* lower_from_pointer = &upper_ptr[6];
  printf("lower: %s\nupper: %s\n\0", lower_from_pointer, upper);
  std::cout << lower_ptr[-5] << std::endl;
  lower_ptr[-5] = 'D';

  printf("lower: %s\nupper: %s\n\0", lower_from_pointer, upper);
  return 0;
}
