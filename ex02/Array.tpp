#ifndef EX02_ARRAY_TPP_INCLUDED
#define EX02_ARRAY_TPP_INCLUDED

#include <exception>

template <typename T> class Array {
private:
  unsigned int length;
  T *array;

  void reallocate(unsigned int newSize) {
    delete[] this->array;
    this->array = nullptr;
    this->array = new T[newSize];
    this->length = newSize;
  }

public:
  Array(unsigned int length = 0) : length(length), array(new T[length]) {}
  ~Array() { delete[] array; }
  Array(const Array &copy) : length(copy.length), array(new T[length]) {
    try {
      this->Array::operator=(copy);
    } catch (const std::exception &e) {
      delete[] this->array;
      throw e;
    }
  }
  Array &operator=(const Array &copy) {
    if (copy.length != this->length)
      this->reallocate(copy.length);
    for (unsigned int i = 0; i < this->length; i++)
      this->array[i] = copy.array[i];
    return *this;
  }

  unsigned int size() const { return this->length; }
  T &operator[](unsigned int index) {
    if (index >= this->length)
      throw std::exception();
    return this->array[index];
  }
  const T &operator[](unsigned int index) const {
    if (index >= this->length)
      throw std::exception();
    return this->array[index];
  };
};

#endif
