#include <cstdio>
/**
 * @brief there are two kinds of enumerations
 *
 * enum class is one of which
 *
 * enum class is a scoped enum
 *
 * for compatibility with C, C++ also supports an unscoped enum
 * which is declared with enum rather than eunm class.
 *
 * The major difference is that scoped enums require the enum's type followed by
 * :: to precede the values, whereas unscoped enums do not. Unscoped enum
 * classes are less safe to use than scoped enums, so shy away from them unless
 * absolutley necessary. They're supported in C++ for mainly historical reasons,
 * especially interoperation with C code.
 *
 */
enum class Race { Dinan, Teklan, Ivyn, Moiran, Camite, Julian, Aidan };

int main() {
  Race enum_var = Race::Ivyn;
  auto auto_var = Race::Julian;
  printf("enum_var: %d\n", enum_var);
  printf("auto_var: %d", auto_var);
  return 0;
}