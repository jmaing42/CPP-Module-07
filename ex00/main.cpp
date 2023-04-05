#include <iostream>

#include "whatever.hpp"

int main(void) {
  {
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
  }
  {
    int a = 0;
    int b = 42;
    ::swap(a, b);
    std::cout << a << ", " << b << std::endl;
    min(a, b) = 4242;
    std::cout << a << ", " << b << std::endl;
    max(a, b) = 0;
    std::cout << a << ", " << b << std::endl;
  }
  return 0;
}
