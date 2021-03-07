#include "core.hpp"

#include <iostream>

namespace temp {

template<>
int add<int>(int lhs, int rhs) {
  std::cout << "Adding ints: " << lhs << " + " << rhs << " = ";

  return lhs + rhs;
}

template<>
float add<float>(float lhs, float rhs) {
  std::cout << "Adding floats: " << lhs << " + " << rhs << " = ";

  return lhs + rhs;
}

template<>
double add<double>(double lhs, double rhs) {
  std::cout << "Adding doubles: " << lhs << " + " << rhs << " = ";

  return lhs + rhs;
}

} // namespace temp