#include "iter.hpp"
#include <iostream>

void doWork(char *&item) { std::cout << item << std::endl; }

int main(int argc, char **argv) { iter(argv, argc, doWork); }
