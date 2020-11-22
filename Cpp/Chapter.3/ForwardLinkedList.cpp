#include <cstdio>

struct Node {
  Node* next{};
  void insert_after(Node* new_node) {
    new_node->next = next;
    this->next = new_node;
  }
  char prefix[2];
  short operating_number{};
};

int main(int argc, char const* argv[]) { return 0; }