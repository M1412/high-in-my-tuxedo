#include <cstdio>

int main() {
  printf("Single qoute escape: \' \n");
  printf("Double qoute escape: \" \n");
  printf("Question mark escape: \? \n");
  printf("Back slash escape: \\ \n");
  printf("Audible bell escape: \a (Produces a sound)\n");
  printf("Backspac\be escape: \b \n");
  printf("Form feed-newpage escape: \fnewpage \n");
  printf("Line feed-newline escape: \nnewline \n");
  printf("Carriage return escape: \r \n");
  printf("Horizontal tab escape: \t \n");
  printf("Vertical tab escape: \v \n");
  printf("Arbitrary octal value escape: \nnn \n");
  printf("Arbitrary hexadecimal value escape: \5nn \n");
  printf("Null: \0");

  getchar();
  return 0;
}