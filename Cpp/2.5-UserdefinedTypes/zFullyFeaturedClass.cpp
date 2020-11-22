/**
 * @file zFullyFeatured.cpp
 * @author Mohamed Ismael (magic.moha@outlook.com)
 * @brief the prefix z on the name is to keep files on order :)
 *
 * @version 0.1
 * @date 2020-11-12
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdio>
// Basicly the struct and class keywords are the same the only differnce
// is that struct declare a class with all public access control and class does
// exactly the opposite
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
class DayCounter {
  int day;

 public:
  DayCounter(int day_in) {
    if (!set_day(day_in)) {
      day = 1;
    }
  }
  void add_day() { day++; }
  bool set_day(int new_day) {
    if (new_day < 0) return false;
    day = new_day;
    return true;
  }
  int get_day() { return day; }
};
int main() {
  ClockOfTheLongNow clock{2022};
  printf("Year: %d\n", clock.get_year());
  clock.set_year(2020);
  printf("Year: %d\n", clock.get_year());
  clock.add_year();
  printf("Year: %d\n", clock.get_year());

  DayCounter day{2};
  printf("Day: %d\n", day.get_day());
  day.set_day(1);
  printf("Day: %d\n", day.get_day());
  day.add_day();
  printf("Day: %d\n", day.get_day());

  // The following initialisations are identical!!
  int x = 1;
  printf("Integer: %d\n", x);
  int y = {2};
  printf("Integer: %d\n", y);
  int z{3};
  printf("Integer: %d\n", z);
  int v(4);
  printf("Integer: %d\n", v);
}
