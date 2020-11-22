#include <cstdio>

enum Operation { Add, Subtract, Multiply, Divide };
struct Calculator {
  Operation operation;
  Calculator(Operation operation) { this->operation = operation; }
  int calculate(int a, int b) {
    switch (operation) {
      case (Operation::Add): {
        return a + b;
      } break;
      case (Operation::Subtract): {
        return a - b;
      } break;
      case (Operation::Multiply): {
        return a * b;
      } break;
      case (Operation::Divide): {
        return a / b;
      }
      default: {
        printf("No operation was provided :D!");
      } break;
    }
    return 0;
  }
};
int main() {
  Calculator multiply{Operation::Multiply};
  printf("5 * 5 = %d\n\0", multiply.calculate(5, 5));
  Calculator divide{Operation::Divide};
  printf("5 / 5 = %d\n\0", divide.calculate(5, 5));
  Calculator subtract{Operation::Subtract};
  printf("5 - 5 = %d\n\0", subtract.calculate(5, 5));
  Calculator add{Operation::Add};
  printf("5 + 5 = %d\n\0", add.calculate(5, 5));

  return 0;
};