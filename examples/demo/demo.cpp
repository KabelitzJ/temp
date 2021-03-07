#include <iostream>
#include <cstdlib>

#include <temp/core/core.hpp>

int main() {

  std::cout << "Hello, temp!" << std::endl;

  std::cout << "Adding int: " << temp::add<int>(1, 4) << std::endl;

  return EXIT_SUCCESS;
}
