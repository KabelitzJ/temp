#include "core.hpp"

namespace temp {

template<>
int add<int>(int lhs, int rhs) {
  return lhs + rhs;
}

template<>
float add<float>(float lhs, float rhs) {
  return lhs + rhs;
}

template<>
double add<double>(double lhs, double rhs) {
  return lhs + rhs;
}

} // namespace temp