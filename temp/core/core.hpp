#ifndef TEMP_CORE_HPP_
#define TEMP_CORE_HPP_

#include <type_traits>
#include <string>

namespace temp {

template<typename T>
std::enable_if_t<std::is_arithmetic_v<T>, T> add(T lhs, T rhs);

template<>
int add<int>(int lhs, int rhs);

template<>
float add<float>(float lhs, float rhs);

template<>
double add<double>(double lhs, double rhs);

} // namespace temp

#endif // TEMP_CORE_HPP_