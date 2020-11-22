/**
 * @file sum.cpp
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

int sum(int x, int y) { return x + y; }

int main() {
  int x, y;
  std::cout << "Enter a value for X: ";
  std::cin >> x;
  std::cout << "Enter a value for Y: ";
  std::cin >> y;
  int result = sum(x, y);
  std::cout << "Using cout, cin: " << result << std::endl;
  printf("Using printf: %d\n", result);
  return 0;
}