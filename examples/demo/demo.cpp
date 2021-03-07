#include <iostream>
#include <cstdlib>

#include <temp/core/core.hpp>

int main() {

  std::cout << "Hello, temp!" << std::endl;

  std::cout << temp::add(1, 4) << std::endl;

  std::cout << temp::add(4.1f, 9.2f) << std::endl;

  std::cout << temp::add(0.3, 5.0) << std::endl;

  return EXIT_SUCCESS;
}
