#include <iostream>
#include "biginteger.h"


int main() {
  BigInteger b1 = 123456789012345678901234567890_bi;
  BigInteger b2 = 999999999999999999999999999999_bi;
  BigInteger b1b2 = b1 * b2;
  std::cout << b1b2 << std::endl;
  return 0;
}
