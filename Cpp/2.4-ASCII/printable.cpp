#include <cstddef>
#include <cstdio>

int main() {
  char alphabet[26];
  for (size_t index = 0; index < 26; index++) {
    alphabet[index] = index + 97;
  }
  printf("SMALL ALPHABET: %s\n", alphabet);
  alphabet[26] = 0;
  for (size_t index = 0; index < 26; index++) {
    alphabet[index] = index + 65;
  }
  printf("CAPITAL ALPHABET: %s\n", alphabet);
  while (true) {
    getchar();
    printf("\a");
  }

  return 0;
}