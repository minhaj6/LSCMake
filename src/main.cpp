#include <stdio.h>
#include <iostream>
// #include "library/src/adder.h"
#include <adder.h> // after installing library to /usr/local/lib
                   // and header to /usr/local/include

int main() {
    printf("Hello world\n");
    std::cout << simplemath::add(5, 30) << std::endl;
    return 0;
}