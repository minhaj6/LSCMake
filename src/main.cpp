#include <stdio.h>
#include <iostream>
#include "library/src/adder.h"

int main() {
    printf("Hello world\n");
    std::cout << simplemath::add(5, 19) << std::endl;
    return 0;
}