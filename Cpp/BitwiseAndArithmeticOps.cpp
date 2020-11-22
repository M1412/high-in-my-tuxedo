#include <assert.h>

#include <bitset>
#include <cstdio>
#include <iostream>

int main(int argc, char const* argv[]) {
  unsigned int a = 10;
  std::cout << a << std::endl;

  std::bitset<8> x{a};
  // (x<<1); bit shift to the left
  // 80 :a , x: 00010100
  std::cout << (a << 3) << " :a , x: " << (x << 1) << std::endl;
  // (x>>1); bit shift to the right
  // 5 :a , x: 00000101
  std::cout << (a >> 1) << " :a , x: " << (x >> 1) << std::endl;

  char name[] = "Mohamed";
  std::cout << name[1] << std::endl;
  char* name_ptr = &name[0];
  std::cout << "Pointer: " << name_ptr << std::endl;
  std::cout << "Dereferenced pointer: " << *(name_ptr + 1) << std::endl;

  // Suhail's code
  size_t sizes[] = {0, 1, 2, 3};
  std::cout << "Sizes: " << sizes[0] << std::endl;
  char* sizes_2 = reinterpret_cast<char*>(sizes);
  std::cout << "Pointer size_2: " << sizes_2 << std::endl;
  size_t s = *(reinterpret_cast<size_t*>(sizes_2 + (sizeof(size_t) * 1)));
  assert(s == 1);
  std::cout << "Pointer: " << s << std::endl;
  //--------------------------------------------------------------------

  int* p = new int(65);
  char* ch = reinterpret_cast<char*>(p);
  std::cout << *p << std::endl;
  std::cout << *ch << std::endl;
  std::cout << p << std::endl;
  std::cout << ch << std::endl;
  return 0;
}
