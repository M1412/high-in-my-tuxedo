#include <cstdio>

struct Book {
  char name[256];
  int year;
  int pages;
  bool hardcover;
//   Book(char name_t[256], int year_t, int pages_t, bool hardcover_t) {
//       // Ask Suhail :D
//     name = name_t;
//     year = year_t;
//     pages = pages_t;
//     hardcover = hardcover_t;
//   }
};

int main() {
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n\0", neuromancer.pages);

  // Initialising POD
  // I can't use new when initialising a class with constructor
  Book another_book{"High in tuxido\0", 2020, 301, true};
  printf("Name: %s\nYear: %d\nPages: %d\nHardcover %d\n\0", another_book.name,
         another_book.year, another_book.pages, another_book.hardcover);
}