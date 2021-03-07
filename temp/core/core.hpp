#ifndef TEMP_CORE_HPP_
#define TEMP_CORE_HPP_

namespace temp {

template<typename T>
T add(T lhs, T rhs);

template<>
int add<int>(int lhs, int rhs);

template<>
float add<float>(float lhs, float rhs);

template<>
double add<double>(double lhs, double rhs);

} // namespace temp

#endif // TEMP_CORE_HPP_