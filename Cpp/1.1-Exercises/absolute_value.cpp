/**
 * @file absolute_value.cpp
 * @author Mohamed Ishmael (magic.moha@outlook.com)
 * @brief
 * @version 0.1
 * @date 2020-10-28
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdio>
#include <iostream>

int absolute(int value) {
  if (value < 0) return value * -1;
  return value;
}

int main() {
  int x = 50;
  std::cout << "Enter a value: ";
  std::cin >> x;
  int result = absolute(x);
  std::cout << "Using cout, cin: " << result << std::endl;
  printf("Using printf: %d\n", result);
  return 0;
}