#include <cstdio>
#include <typeinfo>

struct College {
  char name[128];
};

void print(College* college_ptr) {
  printf("%s college\n\0", college_ptr->name);
}

void print(College* college_ptr, int array_size) {
  for (size_t i = 0; i < array_size; i++) {
    printf("%s college!\n\0", college_ptr[i].name);
  }
}

void print_ref(College (&college_ref)[3]) {
  for (size_t i = 0; i < (sizeof(college_ref) / sizeof(College)); i++) {
    printf("%s college ref!\n\0", college_ref[i].name);
  }
}

int main() {
  College best_colleges[] = {"Magdalen", "Nuffield", "Kellogg"};
  printf("%s\n\0", best_colleges);
  print(best_colleges);
  print(best_colleges, (sizeof(best_colleges) / sizeof(College)));
  printf("Size of the array: %d\nSize of the class: %d\n\0",
         sizeof(best_colleges), sizeof(College));

  // The following code goes wrong in x86 compiling
  College* best_colleges_ptr = &best_colleges[1];
  // printf("%s\n\0", *best_colleges_ptr);  // <-- Wrong line because of
  // dereferencing 'name' memory that results access violation
  printf("%s\n\0", best_colleges_ptr);
  College* ptr = best_colleges + 1;
  printf("%s\n\0", ptr);
  printf("Size of one string: %d\n\0", sizeof(ptr));
  print_ref(best_colleges);
  // So I replaced it with the following
  // printf("%s\n\0", &best_colleges[1]);
  // printf("%s\n\0", best_colleges + 1);
  // printf("Size of one string: %d\n\0", sizeof((best_colleges + 1)));
  return 0;
}