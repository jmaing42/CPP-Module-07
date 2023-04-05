#include <exception>
#include <iostream>

#include "Array.tpp"

void printArray(const Array<int> &array) {
  std::cout << "length: " << array.getLength() << std::endl;
  for (unsigned int i = 0; i < array.getLength(); i++) {
    std::cout << "[" << i << "]: " << array[i] << std::endl;
  }
}

int main() {
  {
    Array<int> a(1);
    Array<int> b(42);

    printArray(a);
    printArray(b);

    a[0] = 1;
    a = b;
    b = Array<int>(5);
    b[0] = 1;

    printArray(a);
    printArray(b);

    try {
      const Array<int> &c = a;
      std::cout << c[42] << std::endl;
    } catch (const std::exception &e) {
      std::cout << "failed" << std::endl;
    }
  }
}
