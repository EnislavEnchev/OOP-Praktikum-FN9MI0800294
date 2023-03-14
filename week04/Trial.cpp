#include <iostream>
#include "Matrix.h"
int main() {
    Matrix a(2, 2);
    a(0, 0) = 1;
    a(0, 1) = 2;
    a(1, 0) = 3;
    a(1, 1) = 4;
    print(a);
    std::cout << std::endl;
    Matrix b(2, 2);
    b(0, 0) = 5;
    b(0, 1) = 6;
    b(1, 0) = 7;
    b(1, 1) = 8;
    print(b);
    std::cout << std::endl;
    Matrix d = a - b;
    print(d);
    Matrix c = a + b;
    
    print(c);
    std::cout << std::endl;
   
    std::cout << std::endl;
    
    std::cout << std::endl;
    Matrix e = a * b;
    print(e);
    std::cout << std::endl;
    if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }
    else {
        std::cout << "a is not equal to b" << std::endl;
    }

    Matrix f = a;
}