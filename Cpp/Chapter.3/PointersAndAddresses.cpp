#include <cstdint>
#include <cstdio>

struct ClockOfTheLongNow {
  ClockOfTheLongNow(int year_in) {
    if (!set_year(year_in)) {
      year = 2020;
    }
  }

  void add_year() { year++; }
  bool set_year(int new_year) {
    if (new_year < 2020) return false;
    year = new_year;
    return true;
  }
  int get_year() { return year; }

 private:
  int year;
};
void add_year_ptr(ClockOfTheLongNow* clock) {
  clock->set_year(clock->get_year() + 1);
}
// using reference
void add_year_ref(ClockOfTheLongNow& clock) {
  // ClockOfTheLongNow* clock_second_name = clock;
  clock.set_year(clock.get_year() + 1);
}
int add_year_no_ptr_or_ref(ClockOfTheLongNow clock) {
  clock.set_year(clock.get_year() + 1);
  return clock.get_year();
}
int main(int argc, char const* argv[]) {
  int integer{1412};
  printf("integer= %d\n\0", integer);
  int* integer_address = &integer;
  printf("&integer_address: %p\n\0", integer_address);
  *integer_address = 1413;
  printf("integer= %d\n\0", *integer_address);
  printf("&integer_address: %p\n\0", integer_address);

  ClockOfTheLongNow clock{2020};
  printf("The year is: %d\n\0", clock.get_year());
  ClockOfTheLongNow* clock_ptr = &clock;
  clock_ptr->set_year(2021);
  printf("The year is: %d\n\0", clock_ptr->get_year());
  // Or
  printf("The year is: %d\n\0", (*clock_ptr).get_year());

  // Using references add_year(); global function
  add_year_ptr(&clock);
  printf("The year is using global with pointer add_year(): %d\n\0",
         clock.get_year());
  add_year_ref(clock);
  printf("The year is using global with reference add_year(): %d\n\0",
         clock.get_year());
  printf("The year is using no pointer or reference add_year(): %d\n\0",
         add_year_no_ptr_or_ref(clock.get_year()));
  printf("The year is using global with reference add_year(): %d\n\0",
         clock.get_year());
  int x = 5;
  int& x_ref = x;
  int* x_ptr = &x_ref;
  printf("");

  return 0;
}
