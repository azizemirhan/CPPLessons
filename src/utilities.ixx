module;

#include <iostream>

export module utilities;

export void say_hello() {
    std::cout << "Hello from utilities module!" << std::endl;
}
